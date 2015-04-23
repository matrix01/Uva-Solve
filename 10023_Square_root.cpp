#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;
int main(){
	int t;
	long double num, ans;
	cin>>t;
	while(t--){
		cin>>num;
		ans=sqrtl(num);
		printf("%llu\n\n", (unsigned long long int)ans);
	}
	return 0;
}