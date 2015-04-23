#include<iostream>
#include<stdio.h>
#include<string>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
	int n, d, r, morn[105], even[105];
	while (cin >> n >> d >> r){
		if (n == 0 && d == 0 && r == 0)break;
		for (int i = 0; i<n; i++)
			cin >> morn[i];
		sort(morn, morn + n);
		for (int i = 0; i<n; i++)
			cin >> even[i];
		sort(even, even + n);
		int sum = 0, overtime = 0;
		for (int i = 0; i<n; i++){
			sum = morn[i] + even[n - i - 1];
			if (sum>d)
				overtime += sum - d;
		}
		cout << overtime*r << endl;
	}

	return 0;
}