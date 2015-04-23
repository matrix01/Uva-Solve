#include<iostream>
#include<cmath>
using namespace std;
const long long int Max=18409900;
const long long int AMax=100000;
int twin[AMax];
int k=0;
char stat[Max];
int p[AMax];
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
	for(int i=0; i<=Max; i++){
		if(stat[i]==0){
			p[k++]=i;
		}

	}
	cout<<"What is this!!"<<endl;
	for(int i=0; i<=k; i++)
		cout<<p[i]<<endl;
}

int main(){
	cout<<"Test"<<endl;
	sieve();
	cout<<"Hang"<<endl;

	return 0;
}