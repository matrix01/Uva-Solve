#include<iostream>
using namespace std;
int main(){
	int t, n;
	cin>>t;
	while(t--){
		cin>>n;
		while(n>=1){
			int r=n%2;
			cout<<r;
			n=n/2;
		}
		cout<<endl;
	}

	return 0;
}