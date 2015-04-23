#include<iostream>
#include<string>
#include<cstring>
#include<cstdio>
#include<queue>
using namespace std;
int main(){
	int t, n, k, count=0, sq=1;
	string s;
	cin>>t;
	while(t--){
		cin>>n>>k;
		int vis[26+5];
		memset(vis, 0, sizeof(vis));
		cin>>s;
		int ck=0;
		for(int i=0; i<n; i++){
			if(vis[s[i]-'A']) ck++;
				vis[s[i]-'A']++;

			if(i-k>=0)
				vis[s[i-k]-'A']--;
		}
		printf("Case %d: %d\n", sq++, ck);
	}
	return 0;
}