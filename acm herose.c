#include<stdio.h>
void main(){
	long long a, b, c, i, t;
	scanf("%lld", &t);
	for(i=1; i<=t; i++){
		scanf("%lld %lld", &a, &b);
		c=(a+b)-1;
		printf("Case %lld: %lld\n", i, c);
	}
}
