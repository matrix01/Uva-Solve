#include<iostream>
#include<cstdio>
#include<cstring>
#include<cctype>
#include<cstdlib>
using namespace std;
int main(){
	long double a, b, res;
	char ch, str[1000], str1[1000];
	while(cin>>str>>ch>>str1){
		a=atof(str);
		b=atof(str1);
		printf("%s %c %s\n", str, ch, str1);
		if(a>2147483647)
			cout<<"first number too big"<<endl;
		if(b>2147483647)
			cout<<"second number too big"<<endl;
		if(ch=='+'){
			res=a+b;
			if(res>2147483647)
				cout<<"result too big"<<endl;
		}
		else{
			res=a*b;
			if(res>2147483647)
				cout<<"result too big"<<endl;
		}
	}
	return 0;
}