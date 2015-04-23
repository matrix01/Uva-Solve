#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;
int main(){
	char num[100];
	int l, i;
	while(cin>>num){
		l=strlen(num);
		for(i=0; i<l; i++){
			if(num[i]>='A'&&num[i]<='C')
				cout<<'2';
			else if(num[i]>='D'&&num[i]<='F')
				cout<<'3';
			else if(num[i]>='G'&&num[i]<='I')
				cout<<'4';
			else if(num[i]>='J'&&num[i]<='L')
				cout<<'5';
			else if(num[i]>='M'&&num[i]<='O')
				cout<<'6';
			else if(num[i]>='P'&&num[i]<='S')
				cout<<'7';
			else if(num[i]>='T'&&num[i]<='V')
				cout<<'8';
			else if(num[i]>='W'&&num[i]<='Z')
				cout<<'9';
			else
				cout<<num[i];
		}
		cout<<endl;
	}

	return 0;
}