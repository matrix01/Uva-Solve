#include<iostream>
#include<cmath>
using namespace std;
long long fibo(long long n){
	long long i=1, h=1;
	long long j=0, k=0, t;
	while(n>0){
		if(n%2==1){
			t=j*h;
			j=i*h+j*k+t;
			i=i*k+t;
		}
		t=h*h;
		h=2*h*k+t;
		k=k*k+t;
		n=(int)n/2;
	}
	return j;
}
int main(){
	long long n, m, fib, mod;
	while(cin>>n>>m){
		if(m==0 && n==0) break;
		fib=(fibo(n));
		mod=pow(2, m);
		cout<<fib%mod<<endl;
	}
	return 0;
}