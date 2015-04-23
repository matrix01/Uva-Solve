#include<iostream>
#include<stdio.h>
#include<cstring>
#include<cmath>
#include<algorithm>
#define fin (freopen("10192_in.txt", "r", stdin))
#define fout (freopen("10192_out.txt", "w", stdout))
#define max(a, b) ((a>b)?a:b)
using namespace std;
int main(){
	int t, N, Q, x, a, D=0;
	cin>>t;
	while(t--){
		D=0;
		cin>>N>>Q;
		while(N--){
			cin>>a;
			D=D|a;
		}
		while(Q--){
			cin>>x;
			cout<<(D&x)<<endl;
		}
	}
	return 0;
}