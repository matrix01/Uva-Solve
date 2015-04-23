#include<iostream>
#include<cmath>
using namespace std;

long long H(int n){
	
	long long res = 0;
	int sqt = (int)sqrt(n)+1;

	for (int i = 1; i < sqt; i = i + 1){
		res = (res + n / i);
	}
	sqt--;
	res = 2*res - sqt*sqt;
	return res;
}

//long long res[2147483647] = {0};
int main(){
	int n, t;
	cin >> t;
	while (t--){
		cin >> n;
		cout << H(n) << endl;
	}
	return 0;
}