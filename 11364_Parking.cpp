#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int t;
	cin >> t;
	while (t--){
		int a[25], n;
		cin >> n;
		for (int i = 0; i < n; i++)
			cin >> a[i];
		sort(a, a + n);
		cout << 2 * (a[n - 1] - a[0]) << endl;
	}
	return 0;
}