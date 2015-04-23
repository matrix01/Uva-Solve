#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
int main(){
	char num[1001];
	int sum;
	while(cin>>num){
		sum=0;
		int len=strlen(num);
		for(int i=0; i<len; i++) sum+=num[i]-48;
		if(!sum) break;
		if(sum%9!=0){ 
			cout<<num<<" is not a multiple of 9."<<endl;
			continue;
		}
		int deg=1;
		while(sum^9){
			int n=sum; sum=0;
			while(n!=0){
				sum+=n%10;
				n/=10;
			}
			deg++;
		}
		cout<<num<<" is a multiple of 9 and has 9-degree "<<deg<<"."<<endl;
	}
	return 0;
}