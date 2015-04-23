#include<iostream>
#include<stdio.h>
#define fin (freopen("10190_in.txt","r",stdin))
#define fout (freopen("10190_out.txt","w",stdout))
#define AMAX 20000
using namespace std;
long long int a[AMAX];
int main(){
	long long int m, n, i, k;
	bool flag;
//	fin;
//	fout;
	while(1){
		cin>>n>>m;
		flag=true;
		k=0;
		while(n!=1){
			if(n%m!=0 && n>1){
				flag=false;
				break;
			}
			else{
				a[k++]=n;
				n=n/m;
				if(n==1) a[k++]=n;
			}
		}
		if(flag==false)
			cout<<"Boring!"<<endl;
		else{
			for(i=0; i<k; i++){
				cout<<a[i];
			//	if(i<(k-1)) cout<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
}
