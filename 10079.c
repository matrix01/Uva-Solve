#include<stdio.h>
void main(){
	long long N;
	
	while(scanf("%lld", &N)&&N>=0){
		
		if(N>=0 && N<=210000000){
			N=(N*N+N+2)/2;
			printf("%lld\n", N);
		}
	}
}
