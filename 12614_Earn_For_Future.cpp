#include<iostream>
using namespace std;
int main(){
	int t, n, x, max, sq=1;
	cin >> t;
	while (t--){
		cin >> n;
		max = 0;
		while (n--){
			cin >> x;
			if (x > max) max = x;
		}
		cout << "Case " << sq++ << ": " << max << endl;
	}
	return 0;
}