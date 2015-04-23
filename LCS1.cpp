#include <stdio.h>
#include <string.h>
#define min(a,b) ((a<b)?a:b)
#define max(a,b) ((a>b)?a:b)
char s1[1010];
char s2[1010];int l1,l2;
int dp[1010][1010];
int lcs(int i,int j){
	if(i>=l1||j>=l2)
		return 0;
	else if(dp[i][j]!=-1)
		return dp[i][j];
	else
		return dp[i][j]=(s1[i]==s2[j])+max(lcs(i+(s1[i]==s2[j]),j+1),lcs(i+1,j+(s1[i]==s2[j])));
}
int main(){
	register int i,j;
	while(gets(s1)&&gets(s2)){
		l1 = strlen(s1);
		l2 = strlen(s2);
		for(i=0;i<=l1;i++)
			for(j=0;j<=l2;j++)
				dp[i][j]=-1;
		printf("%d\n",lcs(0,0));
	}    
	return 0;
}