#include<iostream>
#include<stdio.h>
#include<cstdlib>
#include<cstring>
#include<string>
#include<cmath>
#include<cctype>
#include<algorithm>
using namespace std;
int main(){
	char ch;
	int num;
	while(cin>>ch){
		num=0;
		num+=ch-'0';
		while(cin>>ch){
			if(ch=='#') break;
			num=num<<1;
			num+=ch-'0';
			num=num%131071;
		}
		if(num==0)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}