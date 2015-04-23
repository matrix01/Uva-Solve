#include<iostream>
#include<stdio.h>
#include<cstring>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
	long long N, temp;
	while(cin>>N && N!=0){
		if(N<0)
			temp=N*(-1);
		else
			temp=N;
		if(N<0)
			cout<<N<<" = -1 x ";
		else
			cout<<N<<" = ";
		long long i;
		for(i=2; i*i<=temp; i++){
			while(temp%i==0){
				temp=temp/i;
				cout<<i;
				if(temp>1)
					cout<<" x ";
			}
		}
		if(temp>1)
			cout<<temp;
		cout<<endl;
	}
	return 0;
}