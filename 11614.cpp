/*
* status: Accepted
*
*
*/
#include<iostream>
#include<cmath>
using namespace std;
int main(){
	long long i, n, tc, sum;
	cin>>tc;
	while(tc--){
		cin>>n;
		sum=(sqrt(1+8*n)-1)/2;
		cout<<sum<<endl;
	}
	return 0;
}