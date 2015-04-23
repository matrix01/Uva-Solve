#include<iostream>
#include<cstdio>
#include<string>
#include<map>
using namespace std;
int main(){
	int n, i;
	string s;
	while(cin>>n>>s){
		map<string, int>dic;
		string res;
		int len=s.length();
		for(i=0; i+n<=len; i++)
			dic[s.substr(i, n)]++;
		int max=0;
		map<string, int>::iterator it;
		for(it=dic.begin(); it!=dic.end(); it++)
			if(it->second>max){
				res=it->first;
				max=it->second;
			}
			puts(res.c_str());
	}
	return 0;
}