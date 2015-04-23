#include<iostream>
#include<cmath>
#include<stdio.h>
using namespace std;
long long H(int n){
      long long res = 0;
     if(n<1) return 0;
	  for( int i = 1; i <= n; i=i+1 ){
            res = (res + n/i);
      }
     return res;
}
int main(){
	int n, t;
	cin>>t;
	while(t--){
		cin>>n;
		cout<<H(n)<<endl;
	}
	return 0;
}