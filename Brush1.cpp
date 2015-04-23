#include<iostream>
using namespace std;
int main(){
	long long t, n, sum;
	cin >> t;
	for (int i = 1; i <= t; i++){
		cin >> n;
		int x;
		sum = 0;
		while (n--){
			cin >> x;
			if (x>0)
				sum += x;
			else
				continue;
		}
		cout << "Case " << i << ": " << sum << endl;
	}
	return 0;
}