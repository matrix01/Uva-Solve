#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<algorithm>
#include<cstdlib>
#include<queue>
using namespace std;
int dy[] = {0, 1, 1, 1, 0, -1, -1, -1};
int dx[] = {1, 1, 0, -1, -1, -1, 0, 1};
int valid(int r, int c){
	if (r >= 0 && r < 8 && c >= 0 && c < 8){ 
	//	cout << "Valid: " << r << " " << c << endl;
		return 1; 
	}
	return 0;
}
int main1(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
#endif
	int sq=1;
	int r1, c1, r2, c2, r3, c3;
	while (scanf("%d %d %d %d %d %d", &r1, &c1, &r2, &c2, &r3, &c3)!=EOF){
		int board[9][9]={0};
		int vis[9][9]={0};
		queue<int>q;
		q.push(r1-1);
		q.push(c1-1);
		vis[r1-1][c1-1] = 1;
		vis[r3 - 1][c3 - 1] = 1;
		while(!q.empty()){
			int r = q.front(); q.pop();
			int c = q.front(); q.pop();
			
			//cout<<"Acns: "<<r<<" "<<c<<endl;
			for(int i=0; i<8; i++){
				int rr= r+dx[i];
				int cc= c+dy[i];
				//cout<<"After dxdy: "<<rr<<" "<<cc<<" Board vis: "<<vis[rr][cc]<<endl;
				if(valid(rr,cc) ==1 && vis[rr][cc]==0){
					//cout << "Pushing: " << rr << " " << cc << endl;
					
						board[rr][cc] += board[r][c] + 1;
						vis[rr][cc] = 1;
						//cout<<"Pushing: " << rr << " " << cc << endl;
						q.push(rr);
						q.push(cc);
						//if (rr == r2 - 1 && cc == c2 - 1) break;
					
				}
			}
		}
		/*for(int i=0; i<8; i++){
			for(int j=0; j<8; j++){
				cout<<board[i][j]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;*/
		cout<<"Case "<<sq++<<": "<<board[r2-1][c2-1]<<endl;
	}
	return 0;
}
