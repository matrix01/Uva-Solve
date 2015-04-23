#include<iostream>
using namespace std;
int main(){
	int ka[60], n, k;
	while (cin >> k >> n){
		int count = 0;
		for (int i = 0; i < k; i++)
			cin >> ka[i];
		
		for (int i = 0; i < k; i++)
		if (ka[i] >= ka[n-1] && ka[i]>0) count++;
		
		cout <<count << endl;
	}
	return 0;
}