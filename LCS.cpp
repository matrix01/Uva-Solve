#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int len1, len2;
int memo[110][110];
char str[1000], substr[1000];
int max(int a, int b){
	if(a>b) return a;
	else return b;
}
int dp(int i, int j){
	len1=strlen(str);
	len2=strlen(substr);
	if(i==len1||j==len2) return 0;
	if(memo[i][j]!=-1) return memo[i][j];
	if(str[i]==substr[j]){
		memo[i][j]=1+dp(i+1,j+1);
		return memo[i][j];
	}
	else{
		int a=dp(i+1, j);
		int b=dp(i, j+1);
		memo[i][j]=max(a, b);
		return memo[i][j];
	}
}
int main02(){
	while(1){
		for(int i=0; i<110; i++) memo[i][0]=-1;
		for(int i=0; i<110; i++) memo[0][i]=-1;

		cin>>str;
		cin>>substr;
		int ans=dp(0, 0);
		cout<<ans<<endl;
	}
}