#include<iostream>
#include<stdio.h>
#include<cstring>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;
#define Max 1000005
bool state[Max];
void prime_sieve(){
	int sqt=sqrt(Max);
	for(int i=2; i<Max; i++)
		state[i]=true;
	for(int i=2; i<=sqt; i++)
		for(int j=i*2; j<Max; j=j+i)
			state[j]=false;
}

int main(){
	prime_sieve();
	int n;
	while(cin>>n&&n!=0){
		bool flag=true;
		int i=3;
		while(i<=n-i&&flag){
			if(state[n-i]&&state[i]){
				printf("%d = %d + %d\n", n, i, n-i);
				flag=false;
			}
			i+=2;
		}
	}
	return 0;
}