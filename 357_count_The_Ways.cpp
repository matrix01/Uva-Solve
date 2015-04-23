#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
using namespace std;
int coin[] = { 1, 5, 10, 25, 50};
int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	long long dp[30005];
	memset(dp, 0, sizeof(dp));
	dp[0] = 1;
	for (int i = 0; i < 5; i++){
		for (int j = coin[i]; j < 30005; j ++){
			dp[j] += dp[j - coin[i]];
		}
	}
	int a;
	while (cin >> a){
		if (dp[a]!=1)
			cout <<"There are "<<dp[a]<<" ways to produce "<<a<<" cents change." << endl;
		else
			cout << "There is only " << dp[a] << " way to produce " << a << " cents change." << endl;
	}
	return 0;
}