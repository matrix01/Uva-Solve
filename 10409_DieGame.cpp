#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, top, bot, nor, sou, eas, wes;
	string inp;
	while (cin >> n && n!=0){
		top = 1; bot = 6; nor = 2; sou = 5; eas = 4; wes = 3;
		while (n--){
			cin >> inp;
			int tmp;
			if (inp == "north"){
				tmp = top;
				top = sou;
				sou = bot;
				bot = nor;
				nor = tmp;
			}
			else if (inp == "south"){
				tmp = top;
				top = nor;
				nor = bot;
				bot = sou;
				sou = tmp;
			}
			else if (inp == "east"){
				tmp = top;
				top = wes;
				wes = bot;
				bot = eas;
				eas = tmp;
			}
			else{
				tmp = top;
				top = eas;
				eas = bot;
				bot = wes;
				wes = tmp;
			}
		}
		cout << top << endl;
	}
	return 0;
}