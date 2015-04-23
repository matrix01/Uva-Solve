#include<iostream>
using namespace std;
int main(){
	double len, wid, dep, w;
	int t, bag_passed = 0;
	cin >> t;
	while (t--){
		cin >> len >> wid >> dep >> w;
		if (w <= 7.00 && (((len + wid + dep) <= 125.00) || (len <= 56.0 && wid <= 45 && dep<=25))){
			cout << "1" << endl;
			bag_passed++;
		}
		else{
			cout << "0" << endl;
		}
	}
	cout << bag_passed << endl;
	return 0;
}