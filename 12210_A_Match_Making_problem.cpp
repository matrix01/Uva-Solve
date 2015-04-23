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
	int B, S, i, b, s, sq=1;
	while(cin>>B>>S){
		int min=999999999;
		if(B==0&&S==0) break;
		for(i=0; i<B; i++){
			cin>>b;
			if(b<min)
				min=b;
		}
		for(i=0; i<S; i++)
			cin>>s;
		if(B<=S) printf("Case %d: 0\n", sq++);
		else
			printf("Case %d: %d %d\n", sq++, B-S, min);
	}
	return 0;
}