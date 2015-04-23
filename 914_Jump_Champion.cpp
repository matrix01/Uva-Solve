#include<iostream>
#include<stdio.h>
#include<cstring>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;
#define Max 1000005
int prime[Max];
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
	int i, n, low, up, t;
	cin>>t;
	while(t--){
		cin>>low>>up;
		if(low>up){
			int temp=low;
			low=up;
			up=temp;
		}
		int count[150]={0};
		n=0;
		for(i=low; i<=up; i++){
			if(state[i]!=false)
				prime[n++]=i;
		}
		for(i=0; i<n-1; i++)
			count[prime[i+1]-prime[i]]++;
		int max=0, ind, ans, cnt;
		for(i=0, cnt=0; i<144; i++)
			if(max<count[i]){
				max=count[i];
				cnt=1;
				ind=i;
			}
			else if(max==count[i])
				cnt++;
		if(cnt==1)
			cout<<"The jumping champion is "<<ind<<endl;
		else
			cout<<"No jumping champion"<<endl;
	}
	return 0;
}