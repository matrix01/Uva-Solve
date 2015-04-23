#include<iostream>
#include<stdio.h>
#include<cstring>
#include<string>
#include<cmath>
#include<algorithm>
#include<cctype>
using namespace std;
int main(){
	string s;
	int i;
	while(getline(cin, s)){
		string cs;
		if(s=="DONE") break;
		int l=s.length();
		int k=0;
		for(i=0; i<l; i++){
			s[i]=tolower(s[i]);
			if(isalpha(s[i]))
				cs.push_back(s[i]);
		}
		string rs(cs.begin(), cs.end());
		reverse(rs.begin(), rs.end());
		if(rs==cs) cout<<"You won't be eaten!"<<endl;
		else cout<<"Uh oh.."<<endl;
	}

	return 0;
}