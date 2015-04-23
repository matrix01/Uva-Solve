#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<cmath>
#include<cstring>
using namespace std;
int main(){
	int month[13]={0,0,3,3,6,1,4,6,2,5,0,3,5};
	char days[7][10]={"Friday" ,
		"Saturday",
		"Sunday",
		"Monday",
		"Tuesday",
		"Wednesday",
		"Thursday",};
	int d, m, t;
	cin>>t;
	while(t--){
		cin>>m>>d;
		d=(d+month[m])%7;
		cout<<days[d]<<endl;
	}

	return 0;
}