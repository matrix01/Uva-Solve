#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
#define max 10000000
double a[max];
void pre_cal(){
	a[0]=0;
	for(int i=1; i<=max; i++)
		a[i]=a[i-1]+log10(i);
}
int main(){
	pre_cal();
	int n, t;
	cin>>t;
	while(t--){
		cin>>n;
		printf("%.0lf\n", floor(a[n])+1);
	}
	return 0;
}