#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main(){
	int n;
	char k[30];
	while (cin >> n >> k){
		int len = strlen(k);
		int fact = 1;
		while (n > 1){
			fact *= n ;
			n -= len;
		}
		cout << fact << endl;
	}

	return 0;
}