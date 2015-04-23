#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
	int n;
	while (cin >> n){
		int b[3010], a[3010];
		for (int i = 0; i < n; i++) cin >> a[i];
		bool jolly = true;
		int i;
		
		for (i = 0; i < n-1; i++)
			b[i] = abs( a[i + 1] - a[i]);
		
		sort(b, b + i);

		for (i = 1; i < n; i++){
			if (b[i] == b[i - 1]){
				jolly = false;
				break;
			}
		}

		if (jolly)
			cout << "Jolly" << endl;
		else
			cout << "Not jolly" << endl;
	}
	return 0;
}