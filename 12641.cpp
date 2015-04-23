#include<iostream>
#include<string>
#include<algorithm>
#include<cstring>
#include<cstdio>
using namespace std;
int main(){
	int kase;
	string s1, s2;
	int a[128];
	cin>>kase;	
	while(kase--){
		memset(a, 0, sizeof(a));
		getline(cin, s1);
		getline(cin, s2);
		for(int i=0; i<s1.size(); i++)
			a[s2[i]]=1;
		for(int i=0; i<s2.size(); i++)
			a[s1[i]]++;
		for(int i=0; i<128; i++)
			if(a[i]==2 || a[i]==1)
				printf("%c", i);
		cout<<endl;

	}
	return 0;
}
