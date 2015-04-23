#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <climits>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <cctype>
#include <utility>
using namespace std;
int main(){
	int row, col, i, j;
	int adj_col[]={1,1,1,-1,-1,-1,0,0};
	int adj_row[]={1,0,-1,1,0,-1,1,-1};
	while(cin>>row>>col){
		if(row==0&&col==0) break;
		char sky[102][102];
		for(i=0; i<row; i++)
			for(j=0; j<col; j++)
				cin>>sky[i][j];
		int count=0;
		for(i=0; i<row; i++){
			for(j=0; j<col; j++){
				if(sky[i][j]=='*'){
					bool flag=true;
					for(int k=0; k<8; k++)
						if(((i+adj_row[k])>-1 && (i+adj_row[k])<row) && ((j+adj_col[k])>-1 && (j+adj_col[k])<col))
							if(sky[i+adj_row[k]][j+adj_col[k]]=='*')
								flag=false;
					if(flag==true)count++;
				}
			}
		}
		cout<<count<<endl;
	}

	return 0;
}