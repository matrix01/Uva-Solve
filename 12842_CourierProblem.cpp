#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<cmath>
using namespace std;
int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	double t, l; int sq = 1;
	cin >> t;
	while (t--){
		cin >> l;
		long double t = sqrt(2)+1;
		cout << t << endl;
		printf("Case %d: %.2lf\n", sq++, l*t);
	}
	return 0;
}
