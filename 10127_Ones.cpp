#include<iostream>
using namespace std;
int main(){
	long long n, temp, one;
	while(cin>>n){
		temp=1;
		one=1;
		while(temp%n!=0){
			temp=(temp * 10 + 1) % n;
			one++;
		}
		cout<<one<<endl;
	}

	return 0;
}