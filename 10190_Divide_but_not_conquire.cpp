#include<iostream>
#include<stdio.h>
#define fin (freopen("10190_in.txt","r",stdin))
#define fout (freopen("10190_out.txt","w",stdout))
#define AMAX 200000
using namespace std;
int a[AMAX];
int main(){
	int m, n, i, k;
	bool flag;
	while(cin>>n>>m){
		flag=true;
		k=0;
		if(m==0||n==0||(n==1&&m==1)||n<m||m==1) flag=false;
		while(n!=1&&flag!=false){
			if(n%m!=0){
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
				if(i<(k-1)) cout<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
}