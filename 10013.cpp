#include<iostream>
#include<string>
using namespace std;
int num1[1000010], num2[1000010], sum[1000010];
int main(){
	int m, n;
	cin >> n;
	while (n--){
		cin >> m;
		for (int i = 0; i < m; i++)
			cin >> num1[i] >> num2[i];

		int carry = 0;
		for (int i = m - 1; i >= 0; i--){
			int s = (num1[i] + num2[i] + carry);
			if (s>9){
				sum[i] = s % 10;
				carry = s / 10;
			}
			else{
				sum[i] = s;
				carry = 0;
			}
		}
		
		for (int i = 0; i < m; i++)
			cout << sum[i];
		cout << endl;
		
		if (n != 0) cout << endl;
	}
	return 0;
}