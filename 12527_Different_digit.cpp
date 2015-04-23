#include<iostream>
#include<stdio.h>
#include<cstdlib>
#include<cstring>
#include<string>
#include<cmath>
#include<cctype>
#include<algorithm>
#define fin (freopen("10474_in.txt","r",stdin))
#define fout (freopen("10474_out.txt","w",stdout))
using namespace std;
bool repeat(int n){
	int dig[10];
	memset(dig, 0, sizeof(dig));
	while(n){
		if(dig[n%10])
			return true;
		dig[n%10]=1;
		n/=10;
	}
	return false;
}
int main(){
	int n, m, ans[5050];
	for(int i=0; i<=5000; i++){
		if(repeat(i)==true)
			ans[i]=ans[i-1];
		else
			ans[i]=ans[i-1]+1;
	}
	while(cin>>n>>m){
		cout<<ans[m]-ans[n-1]<<endl;
	}
	return 0;
}