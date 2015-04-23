#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
#define max 2147483647
struct edge{
	int u;
	int v;
	int w;
}e[2010];
int main(){
	int t, n, m;
	cin>>t;
	while(t--){
		cin>>n>>m;
		for(int i=0; i<m; i++)
			cin>>e[i].u>>e[i].v>>e[i].w;
		int d[1010];
		for(int i=0; i<=n; i++)
			d[i]=max;
		d[0]=0;
		for(int i=0; i<n-1; i++)
			for(int j=0; j<m; j++)
				if(d[e[j].u]+e[j].w<d[e[j].v])
					d[e[j].v]=d[e[j].u]+e[j].w;
		bool n_cycle=false;
		for(int i=0; i<m; i++)
			if(d[e[i].u]+e[i].w<d[e[i].v])
				n_cycle=true;
		if(n_cycle)
			cout<<"possible"<<endl;
		else cout<<"not possible"<<endl;
	}
	return 0;
}