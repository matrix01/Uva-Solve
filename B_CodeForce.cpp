#include<iostream>
#include<stdio.h>
#include<cstring>
#define fin (freopen("B_in.txt", "r", stdin))
using namespace std;
int main(){
	char msg[1000], word[100][100];
	int len1, t;
	fin;
	scanf("%d%*c", &t);
	while(t--){
		gets(msg);
		len1=strlen(msg);
		int k=0;
		int l=0;
		int i=0;
		while(i<len1&&len1>0){
			word[k][l++]=msg[i++];
			if(msg[i]==32||i==len1){
				word[k][l++]='\0';
				i++;
				k=k+1;
				l=0;
			}
		}
		for(int j=k-1; j>=0; j--){
			cout<<word[j];
			if(j!=0){
				cout<<" ";
			}
		}
		cout<<endl;
	}
	fclose(stdin);
		return 0;
}