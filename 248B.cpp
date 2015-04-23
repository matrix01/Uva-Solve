#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
long long n, a[100005], l, r, i, sum, res[100005], res1[100005];
int main(){
	
	while (cin >> n){
		memset(res, 0, sizeof(res));
		memset(res1, 0, sizeof(res1));
		a[0] = 0;
		for (i = 1; i <= n; i++)
			cin >> a[i];

		for (i = 1; i <= n; i++)
			res[i] = res[i-1]+ a[i];
		
		sort(a, a + (n+1));
		for (i = 1; i <= n; i++)
			res1[i] = res1[i-1]+ a[i];


		
		int type;

		int m;
		cin >> m;
		while (m--){
			cin >> type >> l >> r;
			if (type == 1){
				cout << res[r] - res[l - 1] << endl;
				//cout << "Test: " << res[r] << " " << res[l - 1] << endl;
			}
			else{
				cout << res1[r] - res1[l - 1] << endl;
				//cout << "Test: " << res1[r] << " " << res1[l - 1] << endl;
			}
		}
	}
	return 0;
}