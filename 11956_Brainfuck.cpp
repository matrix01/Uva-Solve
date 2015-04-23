#include<iostream>
#include<stdio.h>
#include<cstdlib>
#include<cstring>
#include<string>
#include<cmath>
#include<cctype>
#include<algorithm>
#define fin (freopen("11956_in.txt","r",stdin))
#define fout (freopen("11956_out.txt","w",stdout))
using namespace std;
int main(){
	unsigned char mem[100];
	int p=0, t;
	char c[100000];
	cin>>t;
	for(int cn=1; cn<=t; cn++){
		p=0;
		cin>>c;
		memset(mem, 0, sizeof(mem));
		for(int i=0; i<strlen(c); i++){
			if(c[i]=='>') p++;
			else if(c[i]=='<') p--;
			else if(c[i]=='+') mem[p]++;
			else if (c[i]=='-') mem[p]--;
			if(p==-1) p=99;
			else if(p==100) p=0;
		}
		printf("Case %d:", cn);
		for(int i=0; i<100; i++)
			printf(" %02X", mem[i]);
		cout<<endl;
	}
	return 0;
}