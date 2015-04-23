#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	int n, a[101];
	int t;
	while (cin >>n){
		int sum = 0, cnt=0, cnt1=0;
		for (int i = 0; i < n; i++){
			cin >> a[i];
			if (a[i] == 200)
				cnt++;
			else{
				cnt1++;
			}
			sum += a[i];
		}
		t = sum / 2;
		//cout << n <<" "<<cnt1<< endl;
		if (n%2!=0 && cnt1==0)
			cout << "NO" << endl;
		else{
			if (t % 100 == 0)
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
		}
	}

	return 0;
}