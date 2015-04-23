#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<queue>
using namespace std;

//Problem with FFFFF
//try to solve this

int r, c, t;
char grid[55][55];
string inp;
// count the height
// count the width
int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	//	freopen("output1.txt", "w", stdout);
#endif
	cin >> t;
	while (t--){
		cin >> inp;
		int len = inp.length();
		r = 0, c = 1;
		int max = 0, min = 1000;
		for (int i = 0; i < len; i++){
			if (inp[i] == 'C') continue;
			else if (inp[i] == 'R'){
				r++;
				if (r>max)max = r;
			}
			else if (inp[i] == 'F'){
				r--;
				if (r < min) min = r;
			}
		}
		cout << max << " " << min << endl;
		if (r < 0){
			r = r*(-2);
		}
		
		for (int i = 0; i <= len+3; i++)
		for (int j = 0; j <= len+3; j++){
			grid[i][j] = ' ';
		}
		
	//	cout << r << endl;
		int row = r + 2;
		r = r + 2;
		int col = len;
		bool Rflag = false, Cflag = false, Fflag = false;

		for (int i = 0; i < len; i++){
			if (inp[i] == 'R' && Cflag == true){
				grid[r][++c] = '/';
				//cout << r << " " << c << endl;
				Rflag = true;
				Cflag = false;
				Fflag = false;
			}
			else if (inp[i] == 'R' && Cflag == false){
				grid[--r][++c] = '/';
				//cout << r << " " << c << endl;
				Rflag = true;
				Fflag = false;
			}
			else if (inp[i] == 'F' && Rflag == true){
				grid[r][++c] = '\\';
				Fflag = true;
				Rflag = false;
				//cout << r << " " << c << endl;
			}
			else if (inp[i] == 'F' && Fflag == true){
				grid[++r][++c] = '\\';
				Fflag = true;
				//cout << r << " " << c << endl;
			}
			else if (inp[i] == 'C' && Cflag == true){
				grid[r][++c] = '_';
				Cflag = true;
				Fflag = false;
				Rflag = false;
				//cout << r << " " << c << endl;
			}
			else if (inp[i] == 'C' && Fflag == true){
				grid[r][++c] = '_';
				Cflag = true;
				Fflag = false;
				Rflag = false;
				//cout << r << " " << c << endl;
			}
			else if (inp[i] == 'C' && Rflag == false){
				grid[--r][++c] = '_';
				Cflag = true;
				Fflag = false;
				Rflag = false;
				//cout << r << " " << c << endl;
			}
			else if (inp[i] == 'C' && Rflag == true){
				grid[--r][++c] = '_';
			//	cout << r << " " << c << endl;
				Cflag = true;
				Fflag = false;
				Rflag = false;
			}
		}

		grid[row][0] = '+';

		for (int i = row - 1; i > 0; i--) grid[i][0] = '|';
		for (int i = 1; i <= col+1; i++) grid[row][i] = '-';

		for (int i = 0; i <=row; i++){
			for (int j = 0; j <= len+1; j++){
				cout << grid[i][j];
			}
			cout << endl;
		}
		cout << endl;
	}
	return 0;
}