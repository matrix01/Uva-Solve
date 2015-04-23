#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
long long min(long long a,long long b){
	if(a<b) return a;
	return b;
}
long long C(long long n, long long r){
	long long ans=1;
	r=min(r, n-r);
	for(int i=1; i<r+1; i++){
		ans*=(n-r+i);
		ans/=i;
	}
	return ans;
}
int main(){
	long long n, r;
	while(cin>>n>>r){
		if(n==0 && r==0) break;
		cout<<C(n, r)<<endl;
	}
	return 0;
}