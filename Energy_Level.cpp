#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
	int t, ob[501], n;
	int sq = 1;
	cin >> t;
	while (t--){
		cin >> n;
		for (int i = 0; i < n; i++){
			cin >> ob[i];
		}
		bool flag = true;
		sort(ob, ob + n);
		int count = 0;
		int mid = ((ob[n - 1] / 2) );
		if (ob[n - 1] % 2 != 0) mid++;
		
		int tmp = mid - 1;
		//cout << mid << endl;
		int res = mid;
		
			for (int i = n - 2; i >= 0; i--){

				flag = true;
				//cout << "obst: " << ob[i]<<"  mid: "<< mid << "  tmp: " << tmp << endl;
				
				while (ob[i] > tmp*2){
					mid++;
					tmp++;
				}

				if (mid >= ob[i]) break;
				tmp--;
			}
			while ((tmp + 1) * 2 < ob[n - 1]){
				mid++;
				tmp++;
			}
			if (ob[n - 1] == 1)mid = 1;
			cout<<"Case "<<sq++<<": " << mid << endl;
	}
	return 0;
}