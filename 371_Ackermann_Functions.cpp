#include <stdio.h>
int main()
{
	long long n, a, k, i, j;
	long long count, max=0, value=0;
	while (scanf("%lld %lld", &i, &j)){
		if(i==0&&j==0)break;
		if(i>j){
			a=i;
			i=j;
			j=a;
		}
		max=0;
		for(k=i; k<=j; k++){
			n=k;	
			count=0;
			while(n>0){
				if(n%2!=0){
					n=(3*n)+1;
					count++;
				}
				else{
					n=n/2;		
					count++;
				}
				if(n==1) break;
			}		
			if(count>max){
				max=count;
				value=k;
			}
		}
		printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n", i, j, value, max);
	}
	return 0;
}
