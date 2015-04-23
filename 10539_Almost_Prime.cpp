#include<iostream>
#include<cmath>
using namespace std;
const long long int Max=18409900;
const long long int AMax=100000;
char stat[Max];
long long int prime[100000000];
void sieve(){
	stat[1]=1, stat[0]=1;
	for(int i=4; i<=Max; i+=2)
		stat[i]=1;
	int sqt=sqrt(Max);
	for(int i=3; i<=sqt; i+=2){
		if(stat[i]==0){
			for(int j=i*3; j<=Max; j=j+2*i){
				stat[j]=1;
			}
		}
	}
	int k=0;
	for(int i=0; i<=Max; i++){
		if(stat[i]==0){
			prime[k]=i;
//		cout<<prime[k]<<" ";
			k++;
		}
	}
	for(int j=0; j<k; j++) cout<<prime[j]<<" ";
	cout<<endl;
}

int main(){
	sieve();
	int index;
/*	while(cin>>index){
		for(int i=0; i<100; i++)
			cout<<p[i]<<" ";
		cout<<endl;
	}*/

	return 0;
}