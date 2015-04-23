#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
using namespace std;
char inp[300];
int curind=0;
bool func(){
	if(inp[curind]>='p' && inp[curind]<='z'){
		curind++;
		return true;
	}
	if(inp[curind]>='N'){
		curind++;
		return func();
	}
	if(inp[curind]=='C' || inp[curind]=='D' || inp[curind]=='E' || inp[curind]=='I' ){
		curind++;
		return (func() && func());
	}
	return false;
}
int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	//freopen("output1.txt", "w", stdout);
#endif
	while(cin>>inp){
		curind=0;
		if(func()==true && curind==strlen(inp))	cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}
