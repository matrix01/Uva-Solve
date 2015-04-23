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
	int s, n, k;
	double p;
	cin >> s;
	while (s--){
		cin >> n >> p >> k;
		if (fabs(p) < 1e-9)
			printf("0.0000\n");
		else{
			double res = pow((1 - p), k - 1) * p;
			res = res / (1 - pow((1 - p), n));
			printf("%.4lf\n", res);
		}
	}

	return 0;
}