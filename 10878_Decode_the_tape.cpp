#include<iostream>
#include<cstring>
#include<string>
#include<cstdio>
#include<cctype>
#include<cmath>
using namespace std;
int binTOdec(char *bin, int len){
	int num=0;
	for(int i=0; i<len; i++){
		num+=(bin[i]-48)*pow(2,(len-i));
		//cout<<bin[i]<<" "<<len-i<<endl;
	}
	return num;
}
int main(){
	char s[25];
	//freopen("10878_in.txt", "r", stdin);
	//freopen("10878_out.txt", "w", stdout);
	while(gets(s)!=NULL){
		if(s[0]=='_')continue;
		char bin[15];
		int l=strlen(s);
		int k=0;
		for(int i=0; i<l;i++){
			if(s[i]=='|'||s[i]=='.')continue;
			else if(s[i]=='o'||s[i]=='O')bin[k++]=49;
			else if(s[i]==' ')bin[k++]=48;
		}
		bin[k]='\0';
		//cout<<bin<<endl;
		int n=binTOdec(bin, k);
		printf("%c", n/2);
	}
	return 0;
}