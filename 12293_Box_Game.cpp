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
	long long m, n;
	while(cin>>n&&n!=0){
		m=1;
		while(m<n){
			m=m*2;
			m++;
		}
		if(m==n)printf("Bob\n");
		else printf("Alice\n");
	}
	return 0;
}