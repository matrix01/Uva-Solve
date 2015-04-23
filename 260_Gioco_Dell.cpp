#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
using namespace std;
char board[205][205], result;
bool visited[205][205];
int n;
void dfs(int x, int y, char c){
	if(x<0||y<0||x==n||y==n||board[x][y]!=c||visited[x][y])
		return;
	if(y==n-1&&board[x][y]=='w'){
		result='W'; 
		return;
	}
	if(x==n-1 &&board[x][y]=='b'){
		result='B';
		return;
	}
	visited[x][y]=true;
	int dx[]={-1,-1,0,0,1,1};
	int dy[]={-1,0,-1,1,0,1};
	for(int i=0; i<6; i++)
		dfs(x+dx[i], y+dy[i], c);
}
int main(){
	int i, j=1;
	while(cin>>n&&n){
		for(i=0; i<n; i++)
			cin>>board[i];
		memset(visited, false, sizeof(visited));
		for(i=0; i<n; i++){
			if(!visited[0][i]&&board[0][i]=='b')
				dfs(0, i, 'b');
		}
		for(i=0; i<n; i++){
			if(!visited[i][0] && board[i][0]=='w')
				dfs(i, 0, 'w');
		}
		printf("%d %c\n",j++, result);
		//cout<<j++<<" "<<result<<endl;
	}
	return 0;
}