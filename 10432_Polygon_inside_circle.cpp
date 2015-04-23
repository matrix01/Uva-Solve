#include<iostream>
#include<stdio.h>
#include<cmath>
#define Pi 2*acos(0)
using namespace std;
int main(){
	double r, n;
	while(cin>>r>>n){
		printf("%.3lf\n", (r*r*sin(2*Pi/n)/2.0)*n);
	}
	return 0;
}