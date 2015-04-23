#include<iostream>
#include<climits>
#include<stdio.h>
#include<cstring>
#include<string>
#include<cmath>
#include<algorithm>
#define MAX 5000005
using namespace std;
int facsum[MAX], countdeprime[MAX];
bool prime[MAX];
void sieve(){
	prime[0]=prime[1]=false;
	int i, j;
	for(i=0; i<MAX; i++) facsum[i]=0;
	for(i=2; i<MAX; i++) prime[i]=true;
	for(i=2; i<MAX; i++){
		if(prime[i]){
			facsum[i]+=i;
			if(i<INT_MAX/2){
				for(j=2*i; j<MAX; j+=i){
					facsum[j]+=i;
					prime[j]=false;
				}
			}
		}
		countdeprime[i]=countdeprime[i-1];
		if(prime[facsum[i]])
			++countdeprime[i];
	}
}
int main(){
	sieve();
	int n, m;
	while(cin>>n&& n!=0){
		cin>>m;
		cout<<countdeprime[m]-countdeprime[n-1]<<endl;
	}
	return 0;
}