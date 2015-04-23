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
	char ch[10000];
	int i, num, N, t, l;
	cin>>t;
	while(t--){
		cin>>N>>ch;
		l=strlen(ch);
		num=0;
		for(i=0; i<l; i++){
			num=(num*10)+(ch[i]-'0');
			num%=N;
		}
		cout<<num<<endl;
	}
	return 0;
}