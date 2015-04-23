#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main(){
	char str[5000][21], inp[21];
	int x=0, i, len[26]={0};
	while(scanf("%s", inp)){
		if(inp[0]=='#')break;
		int l=strlen(inp);
		for(i=0; i<l; i++){
			str[x][i]=inp[i];
		}
		while(i!=21)
			str[x][i++]='a';
		x++;
	}
	for(int a=0; a<21; a++){
		for(int b=0; b<x; b++){
			if(str[b][a]>64&&str[b][a]<91)
				len[str[b][a]-65]++;
			if(len[str[b][a]-65]==1)
				printf("%c", str[b][a]);
		}
	}
	cout<<endl;

	return 0;
}