#include<iostream>
using namespace std;
int max(int a, int  b){
	return a>b? a:b;
}
int min(int a, int b){
	return a<b?a:b;
}
int main(){
	int t, size, n, pos;
	cin>>t;
	while(t--){
		cin>>size>>n;
		int l=0;
		int h=0;
		while(n--){
			cin>>pos;
			l=max(l, min(size-pos, pos));
			h=max(h, max(size-pos, pos));
		}
		cout<<l<<" "<<h<<endl;
	}
	return 0;
}