#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<algorithm>
#include<cstdlib>
using namespace std;
int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
//	freopen("output1.txt", "w", stdout);
#endif
	int sq=1;
	int n, scr[1010], k, s;
	while (cin>>n>>k>>s){
		for(int i=0; i<n; i++){
			cin>>scr[i];
		}
		sort(scr, scr+n);
		int total = s*k, res =0, count =0;
		for(int i=n-1; i>=0; i--){
			
				count++;
				res+=scr[i];
			if(res>=total)break;
		}
		
		cout<<count<<endl;
	}
	return 0;
}
