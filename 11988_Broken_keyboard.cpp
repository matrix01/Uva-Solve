#include<iostream>
#include<list>
#include<queue>
#include<cstdio>
#include<string>
using namespace std;
int main(){
	string s; int len;
	while(cin>>s){
		list<char>l;
		list<char>::iterator it=l.begin();
		len=s.length();
		for(int i=0; i<len; i++){
			if(s[i]=='[')
				it=l.begin();
			else if(s[i]==']')
				it=l.end();
			else
				l.insert(it, s[i]);
		}
		for(it=l.begin(); it!=l.end(); it++)
			cout<<*it;
		cout<<endl;
	}

	return 0;
}