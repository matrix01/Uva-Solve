#include<iostream>
#include<stdio.h>
#include<cstdlib>
#include<cstring>
#include<string>
#include<cmath>
#include<cctype>
#include<algorithm>
#define fin (freopen("10474_in.txt","r",stdin))
#define fout (freopen("10474_out.txt","w",stdout))
using namespace std;
int main(){
	char nam[100], maxname[100], minname[100];
	int n;
	int y, m, d, age, max=0, min=9999999999;
	scanf("%d%*c", &n);
	for(int i=0; i<n; i++){
		scanf("%s %d %d %d", nam, &d, &m, &y);
		age=10000*y+m*100+d;
		if(age>max){
			max=age;
			strcpy(maxname, nam);
		}
		if(age<min){
			min=age;
			strcpy(minname, nam);
		}
	}
	cout<<maxname<<endl;
	cout<<minname<<endl;
	return 0;
}