#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;
#define Max 100000
bool state[Max];
void prime_sieve(){
	for (int i = 2; i<Max; i++)
		state[i] = true;
	for (int i = 2; i<Max; i++)
	for (int j = i * 2; j<Max; j = j + i)
		state[j] = false;
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	prime_sieve();
	int low, high;
	while (cin >> low >> high){
		if (!low && !high) break;
		for (int i = low; i <= high; i++){
			if (state[i]) cout << i << " ";
		}
		cout << endl;
	}
	return 0;
}