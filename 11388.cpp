#include<iostream>
using namespace std;
int main(){
	int t, a, b;
	cin>>t;
	while(t--){
		cin>>a>>b;
		if(b%a)
			cout<<"-1"<<endl;
		else
			cout<<a<<" "<<b<<endl;
	}
	return 0;
}