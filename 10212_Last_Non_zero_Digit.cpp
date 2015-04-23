#define	_CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
#define rd              freopen ( "input.txt" , "r" , stdin )
#define wr              freopen ( "output.txt" , "w" , stdout )
using namespace std;
int main(){
	long long a, b, c, n;
	rd;
	wr;
	while (cin >> a >> b){
		long long fact = 1, i;
		if (b == 0) {
			cout << 1 << endl;
			continue;
		}
		c = (a - b) + 1;
		for (i = a; i>=c; i--){
			fact *= i;
			while (fact % 10 == 0)
				fact /= 10;
			fact %= 100000000;
			//cout << fact << endl;
		}
		cout << fact % 10 << endl;
	}

	return 0;
}