#include<iostream>
using namespace std;
int main(){
	int a, b, c, tc, n, m;
	cin>>tc;
	while(tc--){
		cin>>a>>b>>c;
		cout<<c*(2*a-b)/(a+b)<<endl;
	}
	return 0;
}