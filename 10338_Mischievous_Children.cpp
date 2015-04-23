#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;
double a[23], sum;
int main(){
	sum=1;
	int t, sq=0;
	char word[100];
	for(int i=1; i<=23; i++){
		sum*=i;
		a[i]=sum;
	}
	cin>>t;
	while(t--){
		int b[27]={0};
		cin>>word;
		int l=strlen(word);
		for(int i=0; i<l; i++)
			b[word[i]-65]++;
		sum=1;
		for(int i=0; i<26; i++)
			if(b[i]>1)
				sum*=a[b[i]];
		printf("Data set %d: %.0lf\n",++sq,a[l]/sum);
	}

	return 0;
}