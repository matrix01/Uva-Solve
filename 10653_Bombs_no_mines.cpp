#include<iostream>
#include<cstdio>
#include<queue>
#include<algorithm>
#include<cstring>
using namespace std;

#define max 1005
#define inf 9999999
int grid[max][max];
class matrix{
	int R, C, row, mines, pos, rownum;
	int destc, destr, sourc, sourr;
	queue<int>q;
public:
	matrix(){
		R=C=0;
	}
	void reset_grid(){
		for(int i=0; i<max; i++)
			for(int j=0; j<max; j++)
				grid[i][j]=-1;
	}
	bool valid_way(int r, int c){
		if(r>=0 &&r<=R && c>=0&& c<=C) return true;
		return false;
	}
	void way_distance(int r, int c, int val){
		grid[r][c]=val+1;
//		cout<<grid[r][c]<<endl;
		//cout<<r<<" "<<c<<endl;
		q.push(r);
		q.push(c);
	}
	void my_move(){
		while(!q.empty()){
				int row=q.front(); q.pop();
				int col=q.front(); q.pop();
				if(valid_way(row-1, col)&&grid[row-1][col]<0)
					way_distance(row-1, col, grid[row][col]);
				if(valid_way(row, col-1)&&grid[row][col-1]<0)
					way_distance(row, col-1, grid[row][col]);
				if(valid_way(row, col+1)&&grid[row][col+1]<0)
					way_distance(row, col+1, grid[row][col]);
				if(valid_way(row+1, col)&&grid[row+1][col]<0)
					way_distance(row+1, col, grid[row][col]);
			}
	}
	void print_dis(){
		cout<<grid[destr][destc]<<endl;;
	}
	void take_input(){
		while(cin>>R>>C){
			if(!R||!C)break;
//			cout<<"Crash"<<endl;
			reset_grid();
			cin>>row;
			for(int i=0; i<row; i++){
				cin>>rownum;
				cin>>mines;
				for(int i=0; i<mines; i++){
					cin>>pos;
					grid[rownum][pos]=inf;
				}
			}
				cin>>sourr>>sourc>>destr>>destc;
				grid[sourr][sourc]=0;
				q.push(sourr);
				q.push(sourc);
			my_move();
			print_dis();
		}
	}
};
int main(){
	matrix m;
	//cout<<"Crash"<<endl;
	m.take_input();
	return 0;
}