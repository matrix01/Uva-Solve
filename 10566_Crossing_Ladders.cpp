#include<stdio.h>
#include<math.h>
double min(double x, double y){
	return (x<y)?x:y;
}
double function(double x, double y, double d){
	return 1/sqrt(x*x-d*d)  +  1/sqrt(y*y-d*d);
}
int main(){
	double x, y, d, c, rec, first, last, mid;
	while(scanf("%lf%lf%lf", &x, &y,&c)==3){
		first=0; 
		last=min(x, y);
		rec=1/c;
		while((last-first)>(1e-4)){
			mid=(last+first)/2;
			if(function(x, y, mid)<rec)
				first=mid;
			else
				last=mid;
		}
		printf("%.3lf\n", (first+last)/2);
	}
	return 0;
}