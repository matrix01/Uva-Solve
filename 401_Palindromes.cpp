#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int main(){
	string str, a, b;
	char m[3000];
	memset(m, NULL, sizeof m);
	m['A']='A';
	m['E']='3';
	m['H']='H';
	m['I']='I';
	m['J']='L';
	m['L']='J';
	m['M']='M';
	m['O']='O';
	m['S']='2';
	m['T']='T';
	m['U']='U';
	m['V']='V';
	m['W']='W';
	m['X']='X';
	m['Y']='Y';
	m['Z']='5';
	m['1']='1';
	m['2']='S';
	m['3']='E';
	m['5']='Z';
	m['8']='8';
	while(cin>>str){
		a=b="";
		int l=str.size();
		for(int i=l-1; i>=0; i--){
			a+=str[i];
			b+=m[str[i]];
		}
		if(str==a && str==b)
			cout<<str<<" -- is a mirrored palindrome."<<endl<<endl;
		else if(str==a && str!=b)
			cout<<str<<" -- is a regular palindrome."<<endl<<endl;
		else if(str!=a && str==b)
			cout<<str<<" -- is a mirrored string."<<endl<<endl;
		else
			cout<<str<<" -- is not a palindrome."<<endl<<endl;
	}
	return 0;
}