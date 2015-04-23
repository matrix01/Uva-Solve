#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
struct point{
	double x;
	double y;
};
double dist(point p1, point p2){
	return ((p1.x - p2.x)*(p1.x - p2.x) + (p1.y - p2.y)*(p1.y - p2.y));
}
int main(){
	int n, a, area;
	double x, y;
	while (cin >> n >> a){
		if (n == 0 && a == 0) break;
		area = a*a;
		point p[5] = { { 0, 0 }, { a, 0 }, { 0, a }, {a, a} };
		//cout << p[0].x << p[0].y << p[4].x << p[4].y << endl;
		int m = 0;
		for (int i = 0; i < n; i++){
			cin >> p[0].x >> p[0].y;
			if (dist(p[0], p[1]) <= area && dist(p[0], p[2]) <= area &&dist(p[0], p[3]) <= area && dist(p[0], p[4]) <= area)
				m++;
		}
		printf("%.5lf\n", (double)(m*a*a) / n);
	}
	return 0;
}