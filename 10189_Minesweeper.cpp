#include<iostream>
#include<stdio.h>=
#include<algorithm>
#include<cstring>
#include<cmath>
using namespace std;
int main(){
	char field[150][150], input[140];
	int i, j, m, n, sq=1;
	bool flag=false;
	while(gets(input)){
		sscanf(input,"%d%d", &m, &n);
		if(m==0&& n==0)break;
		int fild[150][150]={0};
		for(i=0; i<m; i++)
			gets(field[i]);
		for(i=0; i<m; i++){
			for(j=0; j<n; j++){
				if(field[i][j]=='*'){
					fild[i][j+1]++;
                    fild[i+1][j+1]++;
                    fild[i+1][j]++;
                    fild[i+1][j-1]++;
                    fild[i][j-1]++;
                    fild[i-1][j-1]++;
                    fild[i-1][j]++;
                    fild[i-1][j+1]++;
				}
			}
		}
		if(flag==true) printf("\n");
		flag=true;
		printf("Field #%d:\n", sq++);
		for(i=0; i<m; i++){
			for(j=0; j<n; j++){
				if(field[i][j]=='*')printf("%c", field[i][j]);
				else printf("%d", fild[i][j]);
			}
			printf("\n");
		}
	}

	return 0;
}