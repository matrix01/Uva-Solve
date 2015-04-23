#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>
using namespace std;
int x[1000002], occur[102];
#define INF 1000000000
int min(int a, int b){
	return (a<b)?a:b;
}
int main(){
	int t;
	cin>>t;
	for(int z=1; z<=t; z++){
		
		int n, m, k;
		
		cin>>n>>m>>k;
		
		x[0]=0; x[1]=1; x[2]=2; x[3]=3;
		
		for(int i=4; i<=n; ++i)
			x[i]=(x[i-3]+x[i-2]+x[i-1])%m+1;
		
		memset(occur, 0, sizeof(occur));
		
		int ans=INF, accept=0;
		
		for(int i=1, j=1; i<=n; i++){
			if(x[i]<=k)
				if(++occur[x[i]]==1)accept++;
			while(accept==k&&j<=i){
				ans=min(ans, (i-j)+1);
				if(x[j]<=k&& --occur[x[j]]==0)accept--;
				j++;
			}
		}
		cout<<"Case "<<z<<": ";
		if(ans>=INF)
			cout<<"sequence nai"<<endl;
		else
			cout<<ans<<endl;
	}
	return 0;
}