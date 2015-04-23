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
using namespace std;
int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output1.txt", "w", stdout);
	#endif
	
	int a[105], N, t, q;
	cin >> t;
	while (t--){
		cin >> N;
		cin >> q;
		for (int i = 0; i < q; i++) cin >> a[i];
	
		long long dp[10005];
		for (int i = 0; i < 10005; i++) dp[i]=INT_MAX;
		
		/* ORIGINAL Solution
		dp[0] = 0;
		for (int i = 0; i <q; i++){
			for (int j = 10000; j >=0; j--){
				if (dp[j] != INT_MAX && j + a[i] <= 10000 && dp[j + a[i]] > dp[j] + 1) 
					dp[j + a[i]] = dp[j] + 1;
			}
		}
		*/
		dp[0] = 0;
		for (int i = 1; i <= 10000; i++)
			dp[i] = INT_MAX;

		for (int i = 0; i < q; i++)
		for (int v = 10001 - a[i] - 1; v >= 0; v--)
		if (dp[v] < INT_MAX)
			dp[v + a[i]] = min(dp[v + a[i]], dp[v] + 1);

		for (int i = N; i <= 10000; i++){
			if (dp[i] != INT_MAX){
				cout << i << " " << dp[i] << endl;
				break;
			}
		}
	
	}
	return 0;
}