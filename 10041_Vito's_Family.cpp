#include<iostream>
#include<stdio.h>
#include<cstring>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
	int t, r, i;
	cin>>t;
	while(t--){
		cin>>r;
		int s[3000], dis=0;
		for(i=0; i<r; i++)
			cin>>s[i];
		sort(s, s+r);
		int mid=r/2;
		for(i=0; i<r; i++)
				dis+=abs(s[i]-s[mid]);
		cout<<dis<<endl;
	}
	return 0;
}