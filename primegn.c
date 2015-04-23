/*
* status: solved
*
*
*/
#include<stdio.h>
#include<string.h>
#include<math.h>
int a[1000]={1};
int* prime_gn(){
	int n=2000, i, j, no_of_prime = 0; 
	int counter=1;
	int isprime;
	for (i=2; i<=n; i++) {
		isprime = 1;
		for (j=2; j<=sqrt(i); j++)
			if ((i%j) == 0)
				isprime = 0;
		if (isprime == 1)
			a[counter++]=i;
	}
	return a;
}
int main(){
	int a[128], val=1, i=0, sum;
	int k, c;
	for(i='a'; i<='z'; i++)
		a[i]=val++;
	for(i='A'; i<='Z'; i++)
		a[i]=val++;
	int *p;
	p=prime_gn();
	char sent[100];
	while(scanf("%s", &sent)!=EOF){
		sum=0;
		int fl=1;
		int l=strlen(sent);
		for(k=0; k<l; k++){
			sum+=a[sent[k]];
		}
		for(c=0; ;c++){
			if(p[c]==sum){
				fl=1;
			}
			else
				fl=0;
		if(p[c]>=sum)
			break;
		}
		if(fl==1)
			printf("It is a prime word.\n");
		if(fl==0)
			printf("It is not a prime word.\n");
	}
		return 0;
}
