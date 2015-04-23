#include<iostream>
#include<cstdio>
#include<cstring>
#include<vector>
#include<list>
#define fin (freopen("572_in.txt", "r", stdin))
#define fout (freopen("572_out.txt", "w", stdout))
using namespace std;
char grid[105][105];
bool visited[105][105];
int m, n;
list<int>l;
void dfs(int i,int j){
	visited[i][j]=true;
	//cout<<"Visited "<<i<<" "<<j<<endl;
	if(grid[i][j+1]=='@'&&j+1<=n && visited[i][j+1]!=true){
		dfs(i, j+1);
		//cout<<i<<" "<<j<<endl;
	}
	if(grid[i-1][j-1]=='@'&&i-1>=0&&j-1>=0 && visited[i-1][j-1]!=true)
		dfs(i-1, j-1);
	if(grid[i-1][j]=='@'&&i-1>=0&&j>=0 && visited[i-1][j]!=true)
		dfs(i-1, j);
	if(grid[i-1][j+1]=='@'&&i-1>=0&&j+1<=n && visited[i-1][j+1]!=true)
		dfs(i-1, j+1);
	if(grid[i][j-1]=='@'&&j>=0 && visited[i][j-1]!=true)
		dfs(i, j-1);
	if(grid[i+1][j-1]=='@'&&i<=m&&j-1>=0 && visited[i+1][j-1]!=true)
		dfs(i+1, j-1);
	if(grid[i+1][j]=='@'&&i<=m && visited[i+1][j]!=true)
		dfs(i+1, j);
	if(grid[i+1][j+1]=='@'&&i<=m&&j+1<=n && visited[i+1][j+1]!=true)
		dfs(i+1, j+1);
}
int main(){
	int i, j;
	while(cin>>m>>n){
		int count=0;
		if(m==0&&n==0)break;
		for(i=0; i<105; i++)
			for(j=0; j<105; j++)
				grid[i][j]='0';
		//Input
		for(i=0; i<m; i++)
			for(j=0; j<n; j++)
				cin>>grid[i][j];
		//Initialize visited
		for(i=0; i<105; i++)
			for(j=0; j<105; j++)
				visited[i][j]=false;
		//Dfs
		for(i=0; i<m; i++){
			for(j=0; j<n; j++){
				if(grid[i][j]=='@'){
					if(visited[i][j]!=true){
						count++;
						//cout<<"visiting--> "<<i<<" "<<j<<endl;
						dfs(i, j);
					}
				}
			}
		}
		cout<<count<<endl;
	}

	return 0;
}