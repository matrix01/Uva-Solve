#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <algorithm>
#include<cstdio>
#include<cstring>
using namespace std;
#define Max 25
int str1[Max], str2[Max];
int memo[Max][Max], len1, len2;
int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int i, j, n, t;
	while (cin >> n){
		memset(str1, 0, sizeof(str1));
		
		for (i = 0; i < n; i++){
			cin >> t;
			str1[t] = i;
		}

		while (cin >> t){
			memset(str2, 0, sizeof(str2));
			str2[t] = 0;
			for (i = 1; i < n; i++){
				cin >> t;
				str2[t] = i;
			}
			for (i = 1; i <=n; i++){
				for (j = 1; j <= n; j++){
					if (str1[i] == str2[j])
						memo[i][j] = memo[i-1][j-1] + 1;
					else
						memo[i][j] = max(memo[i - 1][j], memo[i][j - 1]);
				}
			}

			cout << memo[n][n] << endl;
			memset(memo, 0, sizeof(memo));
		}
	}
	return 0;
}