#include<iostream>
#include<vector>
#include<cstring>
#include<cstdio>
using namespace std;
vector<int>dom[10001];
bool visited[10001];
void dfs(int k){
	if (visited[k] == false){
		visited[k] = true;
		for (size_t i = 0; i < dom[k].size(); i++){
			dfs(dom[k][i]);
		}
	}
}
int main(){
	int t;
	cin >> t;
	while (t--){
		int n, m, l, u, v;
		cin >> n >> m >> l;
		for (int i = 0; i < 10001; i++) dom[i].clear();
		memset(visited, false, sizeof(visited));
		for (int i = 0; i < m; i++){
			cin >> u >> v;
			u--; v--;
			dom[u].push_back(v);
		}
		int k;
		for (int i = 0; i < l; i++){
			cin >> k;
			k--;
			dfs(k);
		}
		int count = 0; 
		for (int i = 0; i <= n; i++){
			if (visited[i] == true)
				count++;
		}
		cout << count << endl;
	}

	return 0;
}