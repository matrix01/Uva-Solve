#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<algorithm>
#include<cstdlib>
using namespace std;
int max(int a, int b){
	if (a>b) return a;
	return b;
}
bool allsamerow(int r1, int c1, int r2, int c2, int r3, int c3){
	if((r1 == r2 && r2 == r3 && c1<c3<c2) ||(r1 == r2 && r2 == r3 && c2<c3<c1)) return true;
	return false;
}
bool allsamecol(int r1, int c1, int r2, int c2, int r3, int c3){
	if((c1 == c2 && c2 == c3 && r1<r3<r2)|| (c1 == c2 && c2 == c3 && r2<r3<r1)) return true;
	return false;
}
bool allsamediagonal(int r1, int c1, int r2, int c2, int r3, int c3 ){
	if((abs(r2-r1)==abs(c2-c1) && abs(r3-r2)==abs(c3-c2) && r1<r3 && r3<r2) || (abs(r2-r1)==abs(c2-c1) && abs(r3-r2)==abs(c3-c2) && r2<r3 && r3<r1)) return true;
	return false;
}
int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int sq=1;
	int r1, c1, r2, c2, r3, c3;
	while (scanf("%d %d %d %d %d %d", &r1, &c1, &r2, &c2, &r3, &c3)!=EOF){
		if(allsamerow(r1, c1, r2, c2, r3, c3)==true){
			//cout<<"Here1"<<endl;
			printf("Case %d: %d\n", sq++, abs(c2-c1));
		}
		else if(allsamecol(r1, c1, r2, c2, r3, c3)==true){
			//cout<<"Here2"<<endl;
			printf("Case %d: %d\n", sq++, abs(r2-r1));
		}
		else if(allsamediagonal(r1, c1, r2, c2, r3, c3)==true){
			//cout<<"Here3"<<endl;
			printf("Case %d: %d\n", sq++, abs(r2-r1)+1);
		}
		else{
			//cout<<"Here4"<<endl;
			cout << "Case " << sq++ << ": " << max(abs(r2 - r1), abs(c2 - c1)) << endl;
		}
		
	}
	return 0;
}
