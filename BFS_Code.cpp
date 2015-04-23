#include<iostream>
#include<stdio.h>
#include<cstring>
#include<cmath>
using namespace std;
char grid[100][100];
int row, col;
int dir[4][2]={{-1, 0}, {0,1},{1,0}, {0,-1}};
void DFS(int r, int c){
	int i=0, j=0;
	grid[i][j]='#';
	int ti, tj;
	for(i=0; i<4; i++){
		ti=r+dir[i][0];
		tj=c+dir[i][1];
		if(ti<0||ti>=row||tj<0||tj>=col) continue;
		if(grid[ti][tj]=='.')
			DFS(ti, tj);
	}
}
int main(){
	int i, j, res=0;
	cin>>row>>col;
	for(int k=0; k<row; k++)
		for(int l=0; l<col; l++)
			cin>>grid[k][l];

	for(i=0; i<row; i++)
		for(j=0; j<col; j++)
			if(grid[i][j]=='.'){
				res++;
				DFS(i, j);
			}
	cout<<res<<endl;
	return 0;
}