#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
using namespace std;
int coin[] = { 1, 5, 10, 25, 50 };
int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	long long dp[7500];
	memset(dp, 0, sizeof(dp));
	dp[0] = 1;
	for (int i = 0; i < 5; i++){
		for (int j = coin[i]; j < 7500; j++){
			dp[j] += dp[j - coin[i]];
		}
	}
	int a;
	while (cin >> a){
		if (a == 0) cout << "1" << endl;
		else
			cout << dp[a] << endl;

	}
	return 0;
}