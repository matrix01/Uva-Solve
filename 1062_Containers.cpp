#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
int max(int a, int b){
	return (a>b)?a:b;
}
int main(){
	string cont;
	int sq=1;
	while(cin>>cont){
		if(cont=="end")break;
		int l=cont.length();
		int a[10010];
		for(int i=0; i<l; i++)
			a[i]=cont[i]-64;
		int dp[10010];
		for(int i=0; i<l; i++){
			dp[i]=1;
			for(int j=0; j<i; j++){
				if(a[j]<a[i])
					dp[i]=max(dp[i], 1+dp[j]);
			}
		}
		int m=0;
		for(int i=0; i<l; i++)
			m=max(m, dp[i]);
		printf("Case %d: %d\n", sq++, m);
	}
	return 0;
}