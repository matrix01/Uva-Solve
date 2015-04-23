#include<iostream>
using namespace std;
int main(){
	long long n;
	int rem[100];
	while(cin>>n){
		if(n<0) break;
		if(n==0) cout<<"0"<<endl;
		else{
			int i=0;
			while(n>0){
				rem[i]=n%3;
				n=n/3;
				i++;
			}
		for(int j=i-1; j>=0; j--)
			cout<<rem[j];
		cout<<endl;
		}
		for(int k=0; k<100; k++)
			rem[k]=0;
	}
	return 0;
}