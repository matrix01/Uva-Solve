#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
struct shape{
	char ch;
	double x, y, x1, y1, r;
}s[11];
bool circle(double dx, double dy, int ind){
	double dis = pow(s[ind].x - dx, 2) + pow(s[ind].y - dy, 2);
	if (dis < (s[ind].r*s[ind].r))
		return true;
	return false;
}
bool rectangle(double dx, double dy, int ind){
	if (s[ind].x < dx && s[ind].y1 < dy &&
		s[ind].x1 > dx && s[ind].y > dy)
		return true;
	return false;
}
int main(){
	char c;
	int i = 0;
	while (cin >> c){
		if (c == 'c'){
			s[i].ch = c;
			cin >> s[i].x >> s[i].y >> s[i].r;
		}
		else if (c == 'r'){
			s[i].ch = c;
			cin >> s[i].x >> s[i].y >> s[i].x1 >> s[i].y1;
		}
		else if (c == '*')
			break;
		i++;
	}
	double dx, dy;
	int points=0;
	while (cin >> dx >> dy){
		points++;
		bool flag = false;
		if (dx == 9999.9 && dy == 9999.9)
			break;
		for (int j = 0; j < i; j++){
			if (s[j].ch == 'c'){
				if (circle(dx, dy, j)==true){
					cout << "Point " << points << " is contained in figure " << j + 1 << endl;
					flag = true;
				}
			}
			else{
				if (rectangle(dx, dy, j)==true){
					cout << "Point " << points << " is contained in figure " << j + 1 << endl;
					flag = true;
				}
			}
		}
		if (flag == false)
			cout << "Point " << points << " is not contained in any figure" << endl;
	}
	return 0;
}