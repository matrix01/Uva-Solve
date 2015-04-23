#include<iostream>
#include<stdio.h>
#include<cstring>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;
#define max(a,b) (a>b)?a:b
int main(){
	long long up, low, t;
	cin>>t;
	while(t--){
		cin>>low>>up;
		if(low==1&&up==0){
			cout<<"Between "<<low<<" and "<<up<<", "<<0<<" has a maximum of "<<2<<" divisors."<<endl;
			continue;
		}
		long long ans, sqt, max=0, div=0, i, j;
		for(i=low; i<=up; i++){
			div=0;
			sqt=sqrt(i);
			for(j=1; j<=sqt; j++){
				if(i%j==0){
					div++;
					if(i/j!=j)
						div++;
				}
				if(max<div){
					max=div;
					ans=i;
				}
			}
		}
		cout<<"Between "<<low<<" and "<<up<<", "<<ans<<" has a maximum of "<<max<<" divisors."<<endl;
	}
	return 0;
}