/************************
*	Accepted
*	Algorithm from Sami vai
*************************/

#include<iostream>
using namespace std;
int bigmod(long long int a, long long int p, long long int m){
	long long c;
	if(p==0) return 1;
	if(p%2==1) return ((a%m)*(bigmod(a, p-1, m)))%m;
	else{
		c=(bigmod(a, p/2, m));
		return (c*c)%m;
	}
}
int main(){
	long long int a, p, m;
	while(cin>>a>>p>>m){
		long long ans=bigmod(a, p, m);
		cout<<ans<<endl;
		ans=0;
	}
	return 0;
}