#include<iostream>
#include<cstdio>
#include<cmath>
#define pi acos(-1)
using namespace std;
int main(){
	double a;
	while (cin >> a){
		a = a*a;
		double x, y, z;
		x = a * (1 - sqrt(3) + pi / 3);
		y = a * (2 * sqrt(3) - 4 + pi / 3);
		z = a * (4 - sqrt(3) - 2 * pi / 3);
		printf("%.3lf %.3lf %.3lf\n", x, y, z);
	}

	return 0;
}