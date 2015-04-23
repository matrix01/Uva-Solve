#include<iostream>
#include<cstdio>
#include<vector>
#include<cmath>
#include<cstring>
#include<string>
#include<algorithm>
using namespace std;
int main(){
	int l, i, t;
	string s;
	cin>>t;
	while(t--){
		vector<char>v;
		cin >> s;
		l=s.length();
		for(i=0; i<l; i++) v.push_back(s[i]);
		sort(v.begin(), v.end());
		do{
			for(i=0; i<l; i++) printf("%c", v[i]);
			cout<<endl;
		}while(next_permutation(v.begin(), v.end()));
		cout<<endl;
	}
	return 0;
}