#include<iostream>
#include<cstring>
#include<string>
#include<cstdio>
#include<algorithm>
#define left 0
#define right 1
#define up 2
#define down 3
using namespace std;
char grid[105][105];
bool collected[105][105];
int main(){
	int i, j, n, m, s;
	while(cin>>n>>m>>s){
		if(!n||!m||!s)break;
		for(i=0; i<n; i++)
			scanf("%s", &grid[i]);
		char dir;
		bool start=false;
		memset(collected, false, sizeof(collected));
		//Starting Point
		for(i=0; i<n; i++)
			for(j=0; j<m; j++)
				if(grid[i][j]=='N'||grid[i][j]=='S'||grid[i][j]=='L'||grid[i][j]=='O'){
					start=true;
					dir=grid[i][j];
					break;
				}
		
		//Geting move and counting sticker
		int count=0;
		char move;
		int direc;
		for(int k=0; k<s; k++){
			scanf("%c", &move);
			if(move=='N')direc=up;
			else if(move=='S')direc=down;
			else if(move=='L')direc=right;
			else if(move=='O')direc=left;
			else if(move=='F'){
				if(direc==up){
					if(grid[i-1][j]=='*'||grid[i-1][j]=='.'){
						i=i-1;
						if(grid[i][j]=='*' && collected[i][j]==false)
						count++;
						collected[i][j]=true;
					}
					else
						if(grid[i-1][j]=='#')
							i=i;
				}
				else if(direc==down){
					if(grid[i+1][j]=='*'||grid[i+1][j]=='.'){
						i=i+1;
						if(grid[i][j]=='*' && collected[i][j]==false)
						count++;
						collected[i][j]=true;
					}
					else
						if(grid[i+1][j]=='#')
							i=i;
				}
				else if(direc==right){
					if(grid[i][j+1]=='*'||grid[i][j+1]=='.'){
						j=j+1;
						if(grid[i][j]=='*' && collected[i][j]==false)
						count++;
						collected[i][j]=true;
					}
					else
						if(grid[i][j+1]=='#')
							j=j;
				}
				else if(direc==left){
					if(grid[i][j-1]=='*'||grid[i][j-1]=='.'){
						j=j-1;
						if(grid[i][j]=='*' && collected[i][j]==false)
						count++;
						collected[i][j]=true;
					}
					else
						if(grid[i][j-1]=='#')
							j=j;
				}
			}
		}
		cout<<count<<endl;
	}

	return 0;
}