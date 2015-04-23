#include<iostream>
#include<stdio.h>
#include<cstdlib>
#include<cstring>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
	int h, m; double res;
	while(scanf("%d:%d", &h, &m)!=EOF){
		if(h==0&&m==0) break;
		res=h*30.0-m*5.5;
		if(res<-180) printf("%.3lf\n", 360.0+res);
		else if(res<0) printf("%.3lf\n", -res);
		else if(res<180) printf("%.3lf\n", res);
		else printf("%.3lf\n", 360.0-res);
	}

	return 0;
}