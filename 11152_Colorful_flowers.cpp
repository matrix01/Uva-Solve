#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;
#define fin (freopen("11152_in.txt","r",stdin))
#define fout (freopen("10469_out.txt","w",stdout))
#define pi 3.141592653589793
int main(){
	double s, a, b, c, t_area, area_big_cir, area_in_cir, rad_big, rad_in;
	while(cin>>a>>b>>c){
		s=(a+b+c)/2;
		t_area=sqrt((s*(s-a)*(s-b)*(s-c)));
		rad_big=(a*b*c)/(4*t_area);
		rad_in=t_area/s;
		area_big_cir=(pi*(rad_big*rad_big))-t_area;
		area_in_cir=pi*(rad_in*rad_in);
		t_area=t_area-area_in_cir;
		printf("%.4lf %.4lf %.4lf\n",area_big_cir, t_area, area_in_cir );
	}

	return 0;
}