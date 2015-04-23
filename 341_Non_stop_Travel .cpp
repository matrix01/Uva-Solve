// Implementation of Dijkstra's algorithm using adjacency lists
// and priority queue for efficiency.
//
// Running time: O(|E| log |V|)
#include<iostream>
#include <queue>
#include <stdio.h>
#include<vector>
#include<map>
#include<set>
#include<list>
#include <functional>
#include<algorithm>
#include<cstring>
#include<cstdlib>
using namespace std;
const int INF = 2000000000;
typedef pair<int,int> PII;
int s, t;
void printPath(vector<int> pp, int t) {
    if (t == s)
        printf("%d", s+1);
    else {
        printPath(pp, pp[t]);
        printf(" %d", t+1);
    }
}

int main(){
	int N, sq=1;

	while(scanf ("%d", &N)){
		if(N==0) break;
		vector<vector<PII> > edges(N);
		for (int i = 0; i < N; i++){
			int M;
			scanf ("%d", &M);
			for (int j = 0; j < M; j++){
				int vertex, dist;
				scanf ("%d%d", &vertex, &dist);
				vertex--;
				edges[i].push_back (make_pair (dist, vertex)); // note order of arguments here
			}
		}
		scanf("%d%d", &s, &t); s--; t--;
	  // use priority queue in which top element has the "smallest" priority
		priority_queue<PII, vector<PII>, greater<PII> > Q;
		vector<int> dist(N, INF), dad(N, -1);
		Q.push (make_pair (0, s));
		dist[s] = 0;
		while (!Q.empty()){
			PII p = Q.top();
			if (p.second == t) break;
			Q.pop();

			int here = p.second;
			for (vector<PII>::iterator it=edges[here].begin(); it!=edges[here].end(); it++){
				if (dist[here] + it->first < dist[it->second]){
					dist[it->second] = dist[here] + it->first;
					dad[it->second] = here;
					Q.push (make_pair (dist[it->second], it->second));
				}
			}
		}
		printf("Case %d: Path = ", sq++);
		printPath(dad, t);
		printf("; %d second delay\n", dist[t]);
	}
    return 0;
}
