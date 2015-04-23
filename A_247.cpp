#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
using namespace std;
int min(int a, int b) { return a < b ? a : b; }
int main(){
#ifndef ONLINE_JUDGE
	//freopen("input.txt", "r", stdin);
	//freopen("output1.txt", "w", stdout);
#endif
	int n, a[5005];
	while (cin >> n){
		bool visit[5005] = { false };
		//cout << n << endl;
		int one = 0, two = 0, three = 0;
		for (int i = 0; i < n; i++){
			cin >> a[i];
			if (a[i] == 1) one++;
			if (a[i] == 2) two++;
			if (a[i] == 3) three++;
		}
		int w = min(three, min(one, two));
		cout<< w << endl;
		for (int i = 0; i < w; i++){
			for (int j = 0; j < n; j++){
				if (visit[j] == false && a[j] == 1){
					cout << j + 1;
					visit[j] = true;
					break;
				}
			}
			for (int j = 0; j < n; j++){
				if (visit[j] == false && a[j] == 2){
					cout <<" "<< j + 1;
					visit[j] = true;
					break;
				}
			}
			for (int j = 0; j < n; j++){
				if (visit[j] == false && a[j] == 3){
					cout << " " << j + 1 << endl;;
					visit[j] = true;
					break;
				}
			}
		}
	}
	return 0;
}
