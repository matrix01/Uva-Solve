#include<iostream>
#include<stdio.h>
#include<cstdlib>
#include<cstring>
#include<string>
#include<cmath>
#include<cctype>
#include<algorithm>
#include<vector>
#define fin (freopen("11956_in.txt","r",stdin))
#define fout (freopen("11956_out.txt","w",stdout))
#define N 1000005
using namespace std;
vector<int>pos[N];
int a[N];
int main(){
	int n, m, k, v, i;
	while(cin>>n>>m){
		for(i=0; i<n; i++) cin>>a[i];
		for(i=0; i<N; i++) pos[i].clear();
		for(i=0; i<n; i++) pos[a[i]].push_back(i+1);
		for(i=0; i<m; i++){
			cin>>k>>v;
			if(pos[v].size()<k) printf("0\n");
			else printf("%d\n", pos[v][k-1]);
		}
	}
	return 0;
}