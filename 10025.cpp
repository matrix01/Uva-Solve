#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	long long k, n;
	cin >> t;
	while (t--){
		cin >> k;
		if (k < 0) k*(-1);
		//n = -1 + sqrt(1 + (8 * k)) / 2;
		n = int((-1 + sqrt(1 + 8 * k)) / 2);
		cout << n << endl;
		long long root = sqrt(n);
		cout << root << endl;
		if (((n*(n + 1)) / 2) == k) cout << n << endl;
		else{
			while ((root*(root + 1) / 2 - k) % 2 != 0) root++;
			cout << root << endl;
		}
	}

	return 0;
}