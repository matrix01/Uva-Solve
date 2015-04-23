#include<iostream>
#include<cstdio>
#include<cstring>
#include<vector>
using namespace std;
bool visit[500005];
vector<int>g[500005];
int cnt[30001];
void dfs(int u, int ind){
	visit[u]=true;
	cnt[ind]++;
	for(int v=0; v<g[u].size(); v++){
		if(visit[g[u][v]]==false){
			//cout<<g[u][v]<<endl;
			dfs(g[u][v], ind);
		}
	}
}
int main(){
	int i, n, t, u, v, vertex, edge;
	cin>>t;
	while(t--){
		memset(cnt, 0, sizeof(cnt));
		cin>>vertex>>edge;
		n=vertex;
		for(i=0; i<=500000; i++)visit[i]=false;
		for(i=0; i<=500000; i++) g[i].clear();
		for(i=0; i<edge; i++){
			cin>>u>>v;
			g[u].push_back(v);
			g[v].push_back(u);
		}
		for(u=1; u<=n; u++){
			if(visit[u]==false){
				dfs(u, u);
			}
		}
		int mx=0;
		for(i=1; i<=vertex; i++){
			//cout<<cnt[i]<<endl;
			if(mx<cnt[i])
				mx=cnt[i];
		}
		cout<<mx<<endl;
	}
	return 0;	
}