#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<queue>
using namespace std;
int board[10][10];
bool visited[10][10];
int dx[]={2, 2, -2, -2, 1, 1, -1, -1};
int dy[]={1, -1, 1, -1, 2, -2, 2, -2};
bool valid(int r, int c){
	if(r>=0 && r<8 && c>=0 && c<8) return true;
	else return false;
}
int bfs(int r, int c, int er, int ec){
	int min=10000000;
	queue <int> q;
	q.push(r);
	q.push(c);
	//board[r][c]=-1;
	board[er][ec]=-2;
	visited[r][c]=true;
	while(!q.empty()){
		int sr = q.front(); q.pop();
		int sc = q.front(); q.pop();
		for(int i=0; i<8; i++){
			r = sr+ dx[i];
			c = sc+ dy[i];
		//	cout<<r<<" "<<c<<endl;
			if(valid(r, c)== true && visited[r][c]==false){
				visited[r][c]=true;
				if(board[r][c]==-2){
					if(min>board[sr][sc]+1) min = board[sr][sc]+1;
				}
				else{
					board[r][c]= board[sr][sc]+1;
					q.push(r);
					q.push(c);
				}
			}
		}
	}
	return min;
}
int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int row[]={1, 2, 3, 4, 5,6,7, 8};
	int srow, erow;
	int scol, ecol;
	string s;
	while(getline(cin, s)){
		memset(board, 0, sizeof(board));
		memset(visited, false, sizeof(visited));
		
		srow = row[s[0]-97];
		scol = s[1]-48;
		erow = row[s[3]-97];
		ecol = s[4]-48;
		//printf("%d %d %d %d\n", srow, scol, erow, ecol);
		int res = bfs(srow-1, scol-1, erow-1, ecol-1);
	/*	for(int i=0; i<8; i++){
			for(int j=0; j<8; j++){
				cout<<board[i][j]<<" ";
			}
			cout<<endl;
		}*/
		if(res==10000000)cout<<"To get from " << s[0]<< s[1] <<" to "<< s[3] << s[4] <<" takes 0 knight moves."<<endl;
		else cout<<"To get from " << s[0]<< s[1] <<" to "<< s[3] << s[4] <<" takes "<<res<<" knight moves."<<endl;
	}
	
	return 0;
}
