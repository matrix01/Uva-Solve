#include<iostream>
using namespace std;
int main(){
	int t;
	while (cin>>t && t!=0){
		int l, w, h, tmp = 0, vol = 0;
		while (t--){
			cin >> l >> w >> h;
			if (tmp < h){
				tmp = h;
				vol = l*w*h;
			}
			else{
				if (tmp == h){
					tmp = h;
					int v = l*w*h;
					if (vol < v)
						vol = v;
				}
			}
		}
		cout << vol << endl;
	}
	return 0;
}