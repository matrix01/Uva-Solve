#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<cmath>
using namespace std;
int vis[10000000];
int main0(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	//freopen("output1.txt", "w", stdout);
#endif
	int sq = 1, t, a, aa[4000], b[4000], c[4000];
	cin >> t;
	while (t--){
		cin >> a;
		int count = 0;
		memset(vis, 0, sizeof(vis));
		for (int i = 2; i <= sqrt(a); i++){
			if (a%i == 0){
				double cc = ceil(sqrt(((2 * i)*(2 * i)) + ((a / i)*(a / i))));
				double cf = floor(sqrt(((2 * i)*(2 * i)) + ((a / i)*(a / i))));
				if (cc == cf){
					int ind = (int)cc;
					aa[count] = i * 2;
					b[count] = a / i;
					c[count++] = cc;;
					i = i * 2 + 1;
					/*if (vis[i*2] == 1 || vis[a/i]==1){
						continue;
					}
					else{
						aa[count] = i * 2;
						vis[i * 2] = 1;
						b[count] = a / i;
						vis[a / 2] = 1;
						c[count++] = cc;
						//cout << "visiting: " << i * 2 << " " << a / 2 << endl;
					}*/
				}
			}
		}
		cout << "Case " << sq++ << ": " << count << endl;
		
		for (int i = 0; i < count; i++){
			cout<<"(" << aa[i] << "," << b[i] << "," << c[i] <<")"<< endl;
		}
	}
	return 0;
}
