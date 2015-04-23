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
	//freopen("output1.txt", "w", stdout);
#endif
	double t, h, d, l, v;
	cin >> t;
	while (t--){
		cin >> l >> d >> h >> v;
		double t = sqrt(2 * h / 9810);
		//cout << t << endl;
		double fall = v*t;
		//cout << fall << endl;
		if ((fall >= (d - 500) && fall <= (d + 500)) || (fall>=((d+l)-500) && fall<=((d+l)+500))) cout << "EDGE" << endl;
		else if ((fall < (d - 500)) || (fall>(d+l)+500)) cout << "FLOOR" << endl;
		else cout << "POOL" << endl;
	}
	return 0;
}
