#include<iostream>
#include<stdio.h>
#include<cmath>
#include<algorithm>
using namespace std;
#define Max 19000000
bool state[Max+1];
int twin[1000000];
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
int main(){
	seive();
	long long N, i, j=1;
	for(i=3; i<Max; i++)
		if(state[i]==0&&state[i+2]==0)
			twin[j++]=i;
	while(cin>>N){
		cout<<"("<<twin[N]<<", "<<twin[N]+2<<")"<<endl;
	}
	return 0;
}