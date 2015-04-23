#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;
int main(){
	int sq=1;
	double n, p;
	while(cin>>n){
		if(n==0) break;
		p = ceil((3+sqrt(9+8*n))/2);
		printf("Case %d: %.0lf\n",sq++,p);
	}
	return 0;
}