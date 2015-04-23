#include<iostream>
#include<stdio.h>
#include<cmath>
#include<algorithm>
using namespace std;
#define Max 1200000
bool state[Max];
void seive(){
	int i, j;
	for(i=0; i<Max; i++)
		state[i]=0;
	state[0]=state[1]=1;
	int k=sqrt(Max);
	for(i=2; i<=k;i++)
		if(!state[i])
			for(j=i*i; j<Max; j=j+i)
				state[j]=1;
}
int main(){
	seive();
	int N;
	while(cin>>N && N!=0){
		int total=0;
		bool flag=false;
		int div=N/2;
		cout<<N<<":"<<endl;
		for(int i=0; i<=div; i++){
			if(state[i]==0&&state[N-i]==0){
				total=(N-i)+i;
				if(total==N){
					cout<<i<<"+"<<N-i<<endl;
					flag=true;
					break;
				}
			}
		}
		if(!flag)
			cout<<"NO WAY!"<<endl;
	}
	return 0;
}