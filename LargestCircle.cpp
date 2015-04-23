#include <vector>
#include <algorithm>
#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;
typedef vector<int> vi;

class AddMultiply {
public:
	vector <int> makeExpression(int y) {
		vi x(3);
		int i = 2, j, k;
		for (j = 2; j<1001; j++)
		for (k = -1000; k<1001; k++)
		if (k != 0 && k != 1 && i*j + k == y){
			x[0]=i;
			x[1] = j;
			x[2] = k;
			break;
		}
		return x;
	}
};
//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!