#include<stdio.h>
void main(){
	long long n, sum;
	while(scanf("%lld", &n)==1){
		if(n>1){
		
			sum=0;
			sum+=(((n*(n+2))/2)*3)-6;
			printf("%lld\n", sum);
		}
	}
}
