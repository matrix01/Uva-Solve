#include<stdio.h>
#include<math.h>
int main(){
	int t, tc=1;
	scanf("%d", &t);
	while(t--){
		double d, v, u, time1, time2;
		scanf("%lf%lf%lf", &d, &v, &u);
		if(v==0||u==0||v>=u){
			 printf("Case %d: can't determine\n",tc++);
        	continue;	
		}
		time1=(d*1.0)/(u*1.0);
		time2=(d*1.0)/(sqrt((u*u-v*v)*1.0));
		double td;
		td=fabs(time2-time1);
		printf("Case %d: %.3lf\n",tc++,td);
	}
	return 0;
}
