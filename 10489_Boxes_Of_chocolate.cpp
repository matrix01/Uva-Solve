#include<iostream>
using namespace std;
int main(){
	int N, B, k, a, i, j, sum, b1, t; 
	cin>>t;
	while(t--){	
		sum=0;
		cin>>N>>B;
		while(B--){
			b1=1;
			cin>>k;
			while(k--){
				cin>>a;
				b1=(b1*a)%N;
			}
			sum=(sum+b1)%N;
		}
		cout<<sum<<endl;
	}
	return 0;
}