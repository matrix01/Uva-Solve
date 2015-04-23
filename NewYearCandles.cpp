#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	int a, b;
	while (cin>>a>>b){
		int sum = 0;
		sum += a;
		int r = 0, rem = 0;
		while (a >= b){
			rem = a%b;
			a = a + rem;
			a/= b;
			r += a;
			//cout << r << endl;
		}
		sum += r;
		//if (a == b - 1) sum++;
		cout << sum << endl;
	}
	return 0;
}