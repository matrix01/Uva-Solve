#include<iostream>
using namespace std;
int main(){
	long long t, n, b;
	cin>>t;
	while(t--){
		cin>>b>>n;
		cout<<(n^(n>>1))<<endl;
	}
	return 0;
}