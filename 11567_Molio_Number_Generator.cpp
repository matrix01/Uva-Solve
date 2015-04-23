#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
long long calculate(long long n){
	if(n==0) return 0;
	if(n==1) return 1;
	if(n&1) return 1+min(calculate(n+1), calculate(n-1));
	else return 1+calculate(n/2);
}
int main(){
	long long n;
	while(cin>>n){
		cout<<calculate(n)<<endl;
	}

	return 0;
}