#include<iostream>
#include<cmath>
using namespace std;
int main(){
	long long n;
	while (cin >> n){
		if (n == -1)break;
		int sqt = sqrt(n);
		for (int i = 2; i <= sqt && n != 1; i++){
			while (n%i == 0){
				cout << "    " << i << endl;
				n /= i;
			}
		}
		if (n != 1)
			cout << "    " << n << endl;
		cout << endl;
	}

	return 0;
}