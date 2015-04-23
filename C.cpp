#include<iostream>
#include<cstring>
#include<cmath>
#include<cstdio>
using namespace std;
#define pi             3.141592653589793
int main(){
	int n, f, t;
	cin >> t;
	while (t--){
		cin >> n >> f;
		double sum=0.0;
		double cake;
		for (int i = 0; i < n; i++){
			cin >> cake;
			sum += pi * pow(cake, 2);
		}
		double ans = sum / f;
		printf("%0.4lf\n", ans);
	}
	return 0;
}