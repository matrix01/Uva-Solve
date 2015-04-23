#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
using namespace std;
int coin[] = { 5, 10, 20, 50, 100, 200, 500, 1000, 2000, 5000, 10000 };
int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	long long dp[30005];
	memset(dp, 0, sizeof(dp));
	dp[0] = 1;
	for (int i = 0; i < 11; i++){
		for (int j = coin[i]; j < 30005; j+=5){
			dp[j] +=dp[j - coin[i]];
		}
	}
	while (scanf("%d.%d", &a, &b)){
		if (a == 0 && b==0)break;
		ind = a * 100 + b;
		printf("%3d.%.2d%17llu\n", a, b, dp[ind]);
		
	}
	return 0;
}
