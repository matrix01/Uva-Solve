#include<iostream>
#include<stdio.h>
#include<cstring>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;
int min(int a, int b){
	return (a<b)?a:b;
}
int main(){
	string s1, s2;
	while(getline(cin, s1)){
		getline(cin, s2);
		int freq1[128]={0}, freq2[128]={0}, l1, l2, i, j;
		l1=s1.length();
		l2=s2.length();
		for(i=0; i<l1; i++)
			freq1[s1[i]]++;
		for(i=0; i<l2; i++)
			freq2[s2[i]]++;
		for(i=97; i<=122; i++)
			if(freq1[i]>0&&freq2[i]>0)
				for(j=0; j<min(freq1[i], freq2[i]); j++)
					printf("%c", i);
		cout<<endl;
	}
	return 0;
}