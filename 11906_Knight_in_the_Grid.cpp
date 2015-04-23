#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<queue>
using namespace std;

int r, c, m, n, w;
bool water[105][105], visited[105][105];
int grid[105][105];

queue <int> q, p;

void bfs(int x, int y, int *dirx, int *diry, int size){
	int np, nq;
	int nx, ny;
	q.push(x);
	q.push(y);
	while (!q.empty()){
		np = q.front(); q.pop();
		nq = q.front(); q.pop();
	//	cout << "POPED QUE: " << np << "  " << nq << endl;
		visited[np][nq] = true;
		
		for (int i = 0; i < size; i++){
			nx = dirx[i] + np;
			ny = diry[i] + nq;
//			cout<<"FROM QUE: " << nx << "  " << ny << endl;
//			cout << "NEW MN : " << m << "  " << n << endl;
			if (nx >= 0 && nx < r && ny >= 0 && ny < c) {
				if (water[nx][ny] != true){
					grid[nx][ny]++;
					//cout << "Visiting: " << nx << "  " << ny << endl;
				}

				if (visited[nx][ny] == false){
			//		cout << "Insrted: " << nx << "  " << ny << endl;
					q.push(nx);
					q.push(ny);
					visited[nx][ny] = true;
				//	cout << "PUTTING: " << nx << "  " << ny << endl;
				}
			}
		}
	}
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
//	freopen("output1.txt", "w", stdout);
#endif
	int t, kase=1;
	while (cin >> t){
		while (t--){
			memset(water, false, sizeof(water));
			memset(grid, 0, sizeof(grid));
			memset(visited, false, sizeof(visited));
			cin >> r >> c >> m >> n;
			cin >> w;
			int x, y;

			int dirx[] = { m, n, -m, -n, m, n, -m, -n };
			int diry[] = { n, m, -n, -m, -n, -m, n, m };

			int dirx1[] = { m, -m, m, -m, };
			int diry1[] = { n, -n, -n, n, };

			int dirx2[] = { m, n, m, -n};
			int diry2[] = { n, m, -n, m};

			int dirx3[] = { m, n, -m, n };
			int diry3[] = { n, m, n, -m };

			for (int i = 0; i < w; i++) cin >> x >> y, water[x][y] = true, visited[x][y]= true;
			
			grid[0][0] = 0;
			if (m == n)
				bfs(0, 0, dirx1, diry1, 4);
			else if (m == 0)
				bfs(0, 0, dirx2, diry2, 4);
			else if (n==0)
				bfs(0, 0, dirx3, diry3, 4);
			else
				bfs(0, 0, dirx, diry, 8);

			int even = 0, odd =0;
			
			for (int i = 0; i < r; i++)
				for (int j = 0; j < c; j++)
				if (grid[i][j] || (!i && !j))
					if (grid[i][j] % 2 != 0)odd++;
					else even++;

			cout<<"Case "<< kase++<<": " << even << " " << odd << endl;
		}
	}
	return 0;
}