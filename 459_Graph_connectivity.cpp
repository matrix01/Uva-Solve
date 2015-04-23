#include<iostream>
#include<cstdio>
#include<cstring>
#include<vector>
using namespace std;
bool visit[30];
vector<int>g[30];
void dfs(int u){
	visit[u]=true;
	for(int v=0; v<g[u].size(); v++){
		if(!visit[g[u][v]])
			dfs(g[u][v]);
	}
}
int main(){
	int i, n, t, u, v;
	char s[3];
	cin>>t;
	scanf("\n");
	while(t--){
		gets(s);
		n=s[0]-'A';
		for(i=0; i<30; i++)visit[i]=false;
		for(i=0; i<=n; i++) g[i].clear();
		while(gets(s)&&s[0]){
			u=s[0]-'A';
			v=s[1]-'A';
			g[u].push_back(v);
			g[v].push_back(u);
		}
		int count=0;
		for(u=0; u<=n; u++){
			if(!visit[u]){
				dfs(u);
				count++;
			}
		}
		cout<<count<<endl;
		if(t)cout<<endl;
	}
	return 0;	
}