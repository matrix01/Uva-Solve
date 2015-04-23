#include<iostream>
#include<stdio.h>
#include<cstdlib>
#include<cstring>
#include<string>
#include<cmath>
#include<cctype>
#include<algorithm>
using namespace std;
int main(){
	int L, W, H, T;
	cin>>T;
	for(int i=1; i<=T; i++){
		cin>>L>>W>>H;
		if(L<=20&&W<=20&&H<=20)
			printf("Case %d: good\n", i);
		else
			printf("Case %d: bad\n", i);
	}
	return 0;
}