#include<iostream>
#include<string>
#include<cstring>
#include<cstdio>
using namespace std;
int main(){
	string s;
	int t, l;
	scanf("%d", &t);
	while(t--){
		cin>>s;
		l=s.length();
		if(s=="1"||s=="4"||s=="78")
			printf("+\n");
		else if(l>=2&&s[l-1]=='5'&&s[l-2]=='3')
			printf("-\n");
		else if(s[0]=='9'&&s[l-1]=='4')
			printf("*\n");
		else if(l>=3&&s[0]=='1'&&s[1]=='9'&&s[2]=='0')
			printf("?\n");
	}
	return 0;
}