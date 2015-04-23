#include<iostream>
using namespace std;
int main(){
	long long n, p;
	bool flag;
	while(cin>>n){
		flag=true;
		p=1;
		while(p<n){
			if(flag==false){
				p=p*2;
				flag=true;
			}
			else {
				p=p*9;
				flag=false;
			}
		}
		if(flag==true)cout<<"Ollie wins."<<endl;
		else cout<<"Stan wins."<<endl;
	}
	return 0;
}