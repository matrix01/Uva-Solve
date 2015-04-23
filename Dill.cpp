#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
using namespace std;
int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
//	freopen("output1.txt", "w", stdout);
#endif
	int a, b;
	while (cin>>a>>b){
		cout<<"1";
		for(int i=2; i<=a; i++) cout<<" "<<i;
		cout<<endl;
		int t=a*2+1;
		cout<<t;
		for(int i=1; i<b; i++){
			t +=(a+1);
			cout<<" "<<t;
		}
		cout<<endl;
	}
	return 0;
}

