#include<iostream>
#include<stdio.h>
#include<cstdlib>
#include<cstring>
#include<string>
#include<cmath>
#include<cctype>
#include<algorithm>
#define fin (freopen("10070_in.txt","r",stdin))
#define fout (freopen("10070_out.txt","w",stdout))
using namespace std;
int main(){
	char year[100001];
	int count=0;
	int i, yr4, yr15, yr55, yr100, yr400, l;
	while(cin>>year){
		yr4=0; yr15=0;yr55=0;yr100=0; yr400=0;
		if(count>0)printf("\n");
		count++;
		l=strlen(year);
		for(i=0; i<l; i++){
			yr4=((yr4*10)+(year[i]-'0'))%4;
			yr55=((yr55*10)+(year[i]-'0'))%55;
			yr15=((yr15*10)+(year[i]-'0'))%15;
			yr100=((yr100*10)+(year[i]-'0'))%100;
			yr400=((yr400*10)+(year[i]-'0'))%400;
		}
		if((!yr4&&yr100)||!yr400){
			printf("This is leap year.\n");
			if(!yr15)
				printf("This is huluculu festival year.\n");
			if(!yr55)
				printf("This is bulukulu festival year.\n");
		}
		else{
			if(!yr15)
				printf("This is huluculu festival year.\n");
			else
				printf("This is an ordinary year.\n");
		}
	}
	return 0;
}