#include<iostream>
using namespace std;
int main(){
	long long per[1001];

	per[0] = 2; per[1] = 5; per[2] = 13;

	for (int i = 3; i <= 1001; i++)
		per[i] = 2 * per[i - 1] + per[i - 2] + per[i - 3];

	int n;
	while (cin >> n) cout << per[n-1] << endl;
	return 0;
}