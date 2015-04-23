#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<vector>
#include<map>
#include<cctype>
using namespace std;
int main(){
	string n, s;
	while(cin>>n){
		sort(n.begin(), n.end());
		s=n;
		if(n[0]=='0'){
			for(int i=1; i<n.size(); i++)
				if(n[i]!='0'){
					swap(n[0], n[i]);
					break;
				}
		}
		reverse(s.begin(), s.end());
		long long a=0, b=0;
		int l=0;
		while(l<s.size()){
			a=(a*10)+(s[l++]-48);
		}
		l=0;
		while(l<n.size()){
			b=(b*10)+(n[l++]-48);
		}
		if(a>b)swap(a, b);
		printf("%lld - %lld = %lld = 9 * %lld\n", b, a, (b-a), ((b-a)/9));
	}
	return 0;
}