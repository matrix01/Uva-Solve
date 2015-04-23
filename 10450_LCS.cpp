#include<stdio.h>
#include<string.h>
#define max(a, b) ((a>b)?a:b)
char str1[1050], str2[1050];
int memo[1050][1050], len1, len2;
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
