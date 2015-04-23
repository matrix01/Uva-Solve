#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
	unsigned long long n, k, i;
	while(cin>>n>>k){
		long double count=0;
		for(i=n; i>n-k; i--)
			count+=log10(i);
		for(i=k; i>0; i--)
			count-=log10(i);
		count=floor(count)+1;
		cout<<count<<endl;
	}

	return 0;
}