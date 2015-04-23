#include<iostream>
#include<fstream>
#include<stdio.h>
#include<cstring>
#include<cmath>
using namespace std;
int a[1000]={1};
int* prime_gn(){
	int n=2000, i, j, no_of_prime = 0; 
	int counter=1;
	bool isprime;
	for (i=2; i<=n; i++) {
		isprime = true;
		for (j=2; j<=sqrt(i); j++)
			if ((i%j) == 0)
				isprime = false;
		if (isprime == true)
			a[counter++]=i;
	}
	return a;
}
int main(){
	int a[128], val=1, i=0, sum;
	for(int i='a'; i<='z'; i++)
		a[i]=val++;
	for(int i='A'; i<='Z'; i++)
		a[i]=val++;
	int *p;
	p=prime_gn();
	char sent[100];
	while(scanf("%s", &sent)!=EOF){
		sum=0;
		bool fl;
		int l=strlen(sent);
		for(int k=0; k<l; k++){
			sum+=a[sent[k]];
		}
		for(int c=0; ;c++){
			if(p[c]==sum){
				fl=true;
			}
			else
				fl=false;
		if(p[c]>=sum)
			break;
		}
		if(fl==true)
			printf("It is a prime word.\n");
		if(fl==false)
			printf("It is not a prime word.\n");
	}
		return 0;
}