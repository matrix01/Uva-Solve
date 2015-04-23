#include<stdio.h>
void main(){
	int n, count=0, i, sq=0, sum=0;
	
	while(scanf("%d", &n)&& n>=0){
		if(n>1){
			for(i=1; i<=n; i=i*2){
				sum=(i*2);
				count++;
				if(sum>=n)
				break;
			}	
		}
		sq++;
		printf("Case %d: %d\n", sq, count);
		count=0;
		sum=0;
	}
}
