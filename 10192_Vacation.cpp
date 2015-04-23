#include<iostream>
#include<stdio.h>
#include<cstring>
#include<cmath>
#include<algorithm>
#define fin (freopen("10192_in.txt", "r", stdin))
#define fout (freopen("10192_out.txt", "w", stdout))
#define max(a, b) ((a>b)?a:b)
const int MAX=1000;
char str1[MAX], str2[MAX];
int memo[MAX][MAX], len1, len2;
int LCS(int i, int j){
	if(i>=len1||j>=len2) return 0;
	else if(memo[i][j]!=-1) return memo[i][j];
	else
		return memo[i][j]=(str1[i]==str2[j])+max(LCS(i+(str1[i]==str2[j]),j+1),LCS(i+1,j+(str1[i]==str2[j])));
}
int main(){
	int i, j, sq=0;
	while(gets(str1)){
		if(strcmp(str1, "#")==0)break;
		 gets(str2);
		len1=strlen(str1);
		len2=strlen(str2);
		for(i=0; i<len1; i++)
			for(j=0; j<len2; j++)
				memo[i][j]=-1;
		int res=LCS(0,0);
		printf("Case #%d: you can visit at most %d cities.\n",++sq, res);
	}
	return 0;
}