#define _CRT_SECURE_NO_WARNINGS

#include <functional>
#include <algorithm>
#include <iostream>
#include <iterator>
#include <numeric>
#include <sstream>
#include <fstream>
#include <cassert>
#include <climits>
#include <cstdlib>
#include <cstring>
#include <string>
#include <cstdio>
#include <vector>
#include <cmath>
#include <queue>
#include <deque>
#include <stack>
#include <list>
#include <map>
#include <set>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
typedef vector <ii> vii;
typedef vector <int> vi;
#define INF 1000000000


void dijkstra(int s, vi *dist, vector<vii> *graph){
	priority_queue< ii, vector<ii>, greater<ii> > pq;
	pq.push(ii(0, s));
	while (!pq.empty()) {
		ii front = pq.top();
		pq.pop();
		int d = front.first, u = front.second;
		if (d == dist->at(u))
		for (int j = 0; j < (int)graph->at(u).size(); j++) {
			ii v = graph->at(u)[j];                       // all outgoing edges from u
			if (dist->at(u) + v.second < dist->at(v.first)) {
				dist->at(v.first) = dist->at(u) + v.second;                 // relax operation
				pq.push(ii(dist->at(v.first), v.first));
			}
		}
	}
}

int main(){
	int N, cases = 1; scanf("%d", &N);
	while (N--){
		int n, m, s, t;

		scanf("%d %d", &n, &m);
		vector<vii> graph(n, vii());
		int u, v, w;
		for (int i = 0; i < m; ++i)
		{
			scanf("%d %d %d", &u, &v, &w);
			//"connected by a bidirectional cable"
			graph[u].push_back(ii(v, w));
			graph[v].push_back(ii(u, w));
		}
		cin >> s;
		vi dist(n, INF);
		dist[s] = 0;
		
		dijkstra(s, &dist, &graph);
		for (int i = 0; i < n; i++)
			if (dist[i] != INF){
				printf("%d\n",dist[i]);
			}
		else{
			printf("unreachable\n", cases++);
		}

	}
	return 0;

}