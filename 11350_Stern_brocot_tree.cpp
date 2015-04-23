#include<iostream>
#include<stdio.h>
#include<string>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
	string s;
	long long N, l;
	scanf("%d%*c",&N);
	while(N--){
		getline(cin, s);
		l=s.length();
		long long i, a=0, b=1, c=1, d=0, x, y;
		x=a+b;
		y=c+d;
		for(i=0; i<l; i++){
			if(s[i]=='R'){
				a=x;
				c=y;
			}
			if(s[i]=='L'){
				b=x;
				d=y;
			}
			x=a+b;
			y=c+d;

		}
		cout<<x<<"/"<<y<<endl;
	}
	return 0;
}