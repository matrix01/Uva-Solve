#include<iostream>
#include<cstdio>
#include<list>
using namespace std;
int n;

int function(int m){
	list <int>l;
	for(int i=1; i<=n; i++)
		l.push_back(i);

	while(l.size()>1){
		l.pop_front();
		for(int i=1; i<m; i++){
			l.push_back(l.front());
			l.pop_front();
		}
	}
	return l.front();
}
int main(){
	while(cin>>n){
		if(n==0)break;
		int m=1;
		int r=0;
		while(1){
			r=function(m);
			if(r==13)break;
			m++;
		}
		cout<<m<<endl;
	}
	return 0;
}