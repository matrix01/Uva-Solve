#include<iostream>
#include<queue>
#include<algorithm>
#include<functional>
using namespace std;
int main(){
	int n;
	while(cin>>n){
		int x;
		priority_queue<int, vector<int>, greater<int> >q;
		if(n==0) break;
		for(int i=0; i<n; i++) {cin>>x;q.push(x);}
		int total=0, cost=0;
		while(q.size()>1){
			total=q.top(); q.pop();
			total+=q.top(); q.pop();
			cost+=total;
			q.push(total);
		}
		cout<<cost<<endl;
	}
	return 0;
}