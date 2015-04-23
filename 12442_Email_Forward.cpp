#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <climits>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <cctype>
#include <utility>
using namespace std;
int n, t;
int m[50010];
bool color[50010], graph[50010];
void dfs(int x){
	graph[x]=color[x]=1;
	if(m[x]!=-1&&!graph[m[x]])dfs(m[x]);
	graph[x]=0;
	t++;
}
int main(){
	int k, sq=1;
	scanf("%d", &k);
	while(k--){
		memset(color, 0, sizeof(color));
		memset(m, -1, sizeof(m));
		scanf("%d", &n);
		for(int i=0; i<n; i++){
			int x, y;
			scanf("%d%d", &x, &y);
			x--; y--;
			m[x]=y;
		}
		int ans=0, index=-1;
		for(int i=0; i<n; i++){
			t=0;
			if(!color[i])dfs(i);
			if(t>ans){
				ans=t;
				index=i;
			}
		}
		printf("Case %d: %d\n",sq++,index+1);
	}

	return 0;
}