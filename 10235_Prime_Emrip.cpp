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
	for(int i=2; i<Max; i++)
		state[i]=true;
	for(int i=2; i<Max; i++)
		for(int j=i*2; j<Max; j=j+i)
			state[j]=false;
}

int main(){
	prime_sieve();
	long long n;
	while(cin>>n){
		if(state[n]==false)
			cout<<n<<" is not prime."<<endl;
		else{
			long long temp=n;
			long long rev=0, r;
			while(temp!=0){
				r=temp%10;
				rev=rev*10+r;
				temp=temp/10;
			}
			if(state[rev]==true&&rev!=n)
				cout<<n<<" is emirp."<<endl;
			else
				cout<<n<<" is prime."<<endl;
		}
	}
	return 0;
}