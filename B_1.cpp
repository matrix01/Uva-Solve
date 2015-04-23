#include<iostream>
#include<stdio.h>
#include<cstring>
#define fin (freopen("B_in.txt", "r", stdin))
#define fout (freopen("B_out.txt", "w", stdout))
using namespace std;
char msg[100000], word[10000][10000];
int main(){
	int len1, t, sq=1;
	fin;
	fout;
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
		cout<<"Case #"<<sq++<<": ";
		for(int j=k-1; j>=0; j--){
			cout<<word[j];
			if(j!=0){
				cout<<" ";
			}
		}
		cout<<endl;
	}
	fclose(stdin);
	fclose(stdout);
		return 0;
}
