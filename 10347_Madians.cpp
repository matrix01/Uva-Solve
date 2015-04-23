#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;
int main(){
	double m1, m2, m3, median, area;
	while(cin>>m1>>m2>>m3){
		median=(m1+m2+m3)/2.0;
		area=(4/3.0)*sqrt(median*(median-m1)*(median-m2)*(median-m3));
		if(!(area>0)) area=-1;
		printf("%.3lf\n", area);
	}
	return 0;
}