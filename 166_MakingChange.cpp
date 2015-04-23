#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <map>
#include <sstream>
#include <cmath>
#include <bitset>
#include <utility>
#include <set>
#define INT_MAX 2147483647
#define min(a, b) a<b?a:b
using namespace std;
int a[] = { 1, 2, 4, 10, 20, 40};
int minimumChange(int v)
{
	for (int i = 5; i>-1; i--)
	{
		if (v >= a[i])
		{
			return 1 + minimumChange(v - a[i]);
		}
	}
	return 0;
}

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif

	int numCoin[105], t, q;
	
	while (1){
		double N;
		memset(numCoin, 0, sizeof(numCoin));
		for (int i = 0; i < 6; i++) cin >> numCoin[i];

		cin >> N;
		if (numCoin[0] == 0 && numCoin[1] == 0 && numCoin[2] == 0 && numCoin[3] == 0 && numCoin[4] == 0 &&
			numCoin[5] == 0) break;

		long long dp[205];
		for (int i = 0; i < 205; i++) dp[i] = INT_MAX;

		dp[0] = 0;
		for (int i = 1; i <= 200; i++)
			dp[i] = INT_MAX;

		for (int i = 0; i < 6; i++){
			while (numCoin[i]){
				for (int v = 201 - a[i] - 1; v >= 0; v--){
					if (dp[v] < INT_MAX)
						dp[v + a[i]] = min(dp[v + a[i]], dp[v] + 1);
				}
				numCoin[i]--;
			}
		}

		double target = N * 20;
		int minimum = INT_MAX;
		for (int i = target; i < 201; i++)
		{
			minimum = min(minimum, dp[i] + minimumChange(i - target));
		}
		printf("%3d\n", minimum);
	}
	return 0;
}