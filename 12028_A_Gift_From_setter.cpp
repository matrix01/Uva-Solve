#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
long long a[100010], k, c, n;
long long a_sum[100010];
int main(){
	
	int t, sq=1;
	cin >> t;
	while (t--){
		cin >> k >> c >> n >> a[0];
		for (int i = 1; i < n; i++)
			a[i] = (k*a[i - 1] + c) % 1000007;

		sort(a, a + n);

		for (int i = 0; i < n; i++) a_sum[i] = a[i];
		for (int i = 1; i < n; i++) a_sum[i] += a_sum[i - 1];
		long long sum = 0;
		for (int i = 0; i < n; i++){
			long long first = a[i] * (n - i - 1);
			long long sec = a_sum[n - 1] - a_sum[i];
			sum += abs(first - sec);
		}
		cout<<"Case "<<sq++<<": " << sum << endl;
	}
	return 0;
}