#include<iostream>
#include<cmath>
using namespace std;
int a[1000000]={1, 2, 3}, index=3;
int prime[100000], k=0;
char stat[1000000];
void sieve(){
	stat[0]=stat[1]=1;
	int i, j, n=100000;
	int sqt=sqrt(n);
	for(i=3; i<=n; i++){
		if(stat[i]==0){
			for(j=i*i; j<=n; j=j+2){
				stat[j]=1;
			}
		}
	}
	for(i=0; i<=n; i++){
		if(stat[i]==0){
			cout<<i<<endl;
			prime[k++]=i;
		}
	}
}
int main(){
	sieve();
	int n;
		for(int i=0; i<100; i++)
			cout<<prime[i]<<" ";
		cout<<endl;
	return 0;
}