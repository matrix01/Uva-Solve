#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<algorithm>
#include<queue>
using namespace std;
#define Z 1005
#define memo(a,b)       memset (a,b,sizeof(a))
int dx[] = { -1, 0, 0, 1 };
const int dy[] = { 0, -1, 1, 0 };
int r, c, t;
char maze[Z][Z];
bool mazevis[Z][Z];
bool mazevisj[Z][Z];
int mazet[Z][Z];
int mazej[Z][Z];

bool valid(int x, int y){
	if ((x >= 0 && x < r) && (y >= 0 && y < c)) return true;
	else return false;
}
struct node{
	int x;
	int y;
};
int main(){
	
	cin >> t;
	while (t--){
		cin >> r >> c;
		
		int xj=-1, yj=-1, xf=-1, yf=-1;
		node F;
		node J;
		queue<node> q;
		queue<node> Q;
		
		memo(mazevis, false);
		memo(mazevisj, false);
		
		for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++) {
			cin >> maze[i][j];
			if (maze[i][j] == 'J'){
				J.x = i;
				J.y = j;
				mazej[i][j] = 0;
				Q.push(J);
				mazevisj[i][j] = true;
			}
			else if (maze[i][j] == 'F'){
				F.x = i;
				F.y = j;
				mazet[i][j] = 0;
				mazevis[i][j] = true;
				q.push(F);
			}
		}
		
		while (!q.empty()){
			node t = q.front();
			q.pop();
			for (int i = 0; i < 4; i++){
				int nx = t.x + dx[i];
				int ny = t.y + dy[i];
				if (valid(nx, ny) == true && mazevis[nx][ny] == false 
					&& maze[nx][ny] != '#'){
					mazevis[nx][ny] = true;
					mazet[nx][ny] = mazet[t.x][t.y] + 1;
					F.x = nx;
					F.y = ny;
					q.push(F);
				}
			}
		}
		
		int mintime = -1;
		node t;
		while (!Q.empty()){
			t = Q.front();
			Q.pop();
			for (int i = 0; i < 4; i++){
				int nx = t.x + dx[i];
				int ny = t.y + dy[i];
				if (valid(nx, ny) == true){
					if (mazevisj[nx][ny] == false && maze[nx][ny] != '#'){
						mazevisj[nx][ny] = true;
						mazej[nx][ny] = mazej[t.x][t.y] + 1;
						J.x = nx;
						J.y = ny;
						if (mazevis[nx][ny] == false)Q.push(J);
						else if (mazej[nx][ny]<mazet[nx][ny])Q.push(J);
					}
				}
				else{
					mintime = mazej[t.x][t.y] + 1;
					break;
				}
			}
			if (mintime != -1)
				break;
		}

		if (mintime==-1)
		 cout << "IMPOSSIBLE" << endl;
		else cout << mintime << endl;
	}
	return 0;
}