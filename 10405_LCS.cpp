#include<stdio.h>
#include<string.h>
#define max(a, b) ((a>b)?a:b)
const int MAX=10000;
char str1[MAX], str2[MAX];
int memo[MAX][MAX], len1, len2;
int LCS(int i, int j){
	if(i>=len1||j>=len2) return 0;
	else if(memo[i][j]!=-1) return memo[i][j];
	else
		return memo[i][j]=(str1[i]==str2[j])+max(LCS(i+(str1[i]==str2[j]),j+1),LCS(i+1,j+(str1[i]==str2[j])));
}
int main(){
	int i, j;
	while(gets(str1) && gets(str2)){
		len1=strlen(str1);
		len2=strlen(str2);
		for(i=0; i<len1; i++)
			for(j=0; j<len2; j++)
				memo[i][j]=-1;
		int res=LCS(0,0);
		printf("%d\n",res);
	}
	return 0;
}