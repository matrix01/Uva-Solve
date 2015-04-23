#include<iostream>
using namespace std;
int main(){
	int t, p[1005], w[1005], n, g, gw;
	cin>>t;
	while(t--){
		cin>>n;

		for(int i=0; i<n; i++){
			cin>>p[i]>>w[i];
		}
		int dp[35];
		memset(dp, 0, sizeof(dp));
		for(int i=0; i<n; i++){
			for(int j=32; j>=0; j--){
				if(w[i]<=j && dp[j]<dp[j-w[i]]+p[i])
					dp[j]=dp[j-w[i]]+p[i];
			}
		}
		long long maxPrice=0;
		cin>>g;
		for(int i=0; i<g; i++){
			cin>>gw;
			maxPrice+=dp[gw];
		}
		cout<<maxPrice<<endl;
	}
	return 0;
}