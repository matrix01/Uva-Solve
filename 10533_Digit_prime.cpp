#include<iostream>
#include<stdio.h>
#include<cmath>
#include<algorithm>
using namespace std;
#define Max 1000000
bool state[Max+1];
int digitPrimes[1000001], s;
void seive(){
	long long i, j;
	for(i=0; i<Max; i++)
		state[i]=0;
	state[0]=state[1]=1;
	long long k=sqrt(Max);
	for(i=2; i<=k;i++)
		if(!state[i])
			for(j=i*i; j<Max; j=j+i)
				state[j]=1;
}
int sumdigit(int n){
	int sum=0;
	while(n>0){
		sum=sum+n%10;
		n=n/10;
	}
	return sum;
}
void digit_prime(){
	int i;
	for(i=0; i<Max; i++) digitPrimes[i]=0;
	s=0;
	for(i=0; i<Max; i++){
		if(!state[i]&&!state[sumdigit(i)])
			s++;
		digitPrimes[i]=s;
	}
}
int main(){
	seive();
	digit_prime();
	long long T, low, up, i, sum;
	scanf("%lld", &T);
	while(T--){
		scanf("%lld%lld", &low, &up);
		sum=digitPrimes[up]-digitPrimes[low];
		if(!state[low]&&!state[sumdigit(low)])
			sum++;
		printf("%d\n", sum);
	}
	return 0;
}