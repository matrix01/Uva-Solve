#include<iostream>
using namespace std;
int main(){
	int n;
	while(cin>>n){
		if(n==0) break;
		n=n%5;
		switch(n){
			case 0: cout<<"0.00"<<endl; break;
			case 1: cout<<"0.40"<<endl; break;
			case 2: cout<<"0.20"<<endl; break;
			case 3: cout<<"0.20"<<endl; break;
			case 4: cout<<"0.40"<<endl; break;
		}
	}

	return 0;
}