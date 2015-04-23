#include <iostream>
#include <vector>
#include <deque> 
#include <stack>  
#include <algorithm>
#include <ctime> 
#include <queue> 
using namespace std; 
#define SIZE 10000 
struct pq {
	int cost,node;
	bool operator<(const pq &b)const{
		return cost>b.cost;    // Min Priority Queue
	} 
}; 

int Prims(vector<pq>adj[],int source,int nodes) {
	priority_queue<pq>Q;
	vector<int>color(nodes);
	pq U,V;
	int i,sum; 
	V.node=source;
	sum=V.cost=0; 
	Q.push(V); 
	while(!Q.empty()){
		U=Q.top();
		if(color[U.node]==0) {
			sum+=U.cost;
			cout<<U.node<<endl;
		}
		color[U.node]=1;
		Q.pop();
		for(i=0;i<adj[U.node].size();i++){
			if(color[ adj[U.node][i].node]==0){
				V.node=adj[U.node][i].node;
				V.cost=adj[U.node][i].cost;
				Q.push(V);
			}
		}
	}
	return sum; 
} 
int main(){
	int nodes,edges,i,u,v,cost,source,val;
	pq V;
	vector<int>dist;
	vector<pq>adj[SIZE];
	while(scanf("%d %d",&nodes,&edges)==2){ 
		for(i=0;i<nodes;i++){
			adj[i].clear(); //clear adj vector
		}
		for(i=0;i<edges;i++){ 
			scanf("%d %d %d",&u,&v,&cost); 
			V.cost=cost; 
			V.node=v; 
			adj[u].push_back(V); 
			V.node=u;     //For Bidirectional Edges
			adj[v].push_back(V); 
		}
		val=Prims(adj,0,nodes); 
		printf("%d\n",val); 
	} 
	return 0; 
}
