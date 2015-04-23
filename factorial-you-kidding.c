#include <stdio.h>
int main()
{
	long long i, a, fact=1;
	
	while(scanf("%lld", &a)!=EOF){
		if(a>0 && a<8){
			printf("Underflow!\n");
		}
		else if(a>13){
				printf("Overflow!\n");
		}
		else if(a>=8 && a<=13){
			for(i=1; i<=a; i++){
				fact = fact * i ;
			}
			printf("%lld\n", fact);
		}
		else if(a<=0){
			if(a%2==0)
				printf("Underflow!\n");
			else
				printf("Overflow!\n");
		}
		fact=1;
	}
	return 0;
}
