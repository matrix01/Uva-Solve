#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int main(){
	int a, b, t, sq=1;
	cin>>t;
	string num;
	while(t--){
		a=0;
		b=0;
		cin>>a;
		cin>>num;
		if(num.size()>3){
			b=(int)(num[3]-'0');
		}
		 cout << "Case " << sq++ << ": " << a * 0.5 + b * 0.05 << endl;
	}
	return 0;
}