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

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif

	int t, q;
	double a0, an;
	cin >> t;
	while (t--){
		int n;
		cin >> n >> a0 >> an;
		double sum = 0, c;
		for (int i = 0; i < n; i++) {
			cin >> c;
			sum += (n-i)* c;
		}
		printf("%.2lf\n", (n*a0 + an - 2 * sum) / (n + 1));
		if (t) cout << endl;
	}
	return 0;
}