#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;
int main014(){
	char msg[1000], msg1[1000], word[100][100], word1[100][100];
	int len1, len2;
	while(1){
		gets(msg);
		len1=strlen(msg);
		int k=0;
		int l=0;
		int i=0;
		while(i<len1&&len1>0){
			//cout<<k<<" "<<l<<endl;
			word[k][l++]=msg[i++];
			if(msg[i]==32||i==len1){
				//cout<<k<<" "<<l<<endl;
				word[k][l++]='\0';
				i++;
				k=k+1;
				l=0;
			}
		}
		gets(msg1);
		len2=strlen(msg1);
		int x=0;
		int y=0;
		int z=0;
		while(x<len2&&len2>0){
			//cout<<k<<" "<<l<<endl;
			word1[y][z++]=msg1[x++];
			if(msg1[x]==32||x==len2){
				//cout<<k<<" "<<l<<endl;
				word1[y][z++]='\0';
				x++;
				y=y+1;
				z=0;
			}
		}
		int p, q;
		for(int a=0; a<k; a++){
			for(int b=a+1; b<k; b++){
				if(strcmp(word[a], word[b])==0) word[b][0]='F';
			}
		}
		for(int a=0; a<x; a++){
			for(int b=a+1; b<x; b++){
				if(strcmp(word1[a], word1[b])==0) word1[b][0]='F';
			}
		}
		for(p=0; p<k; p++){
			for(q=0; q<x; q++){
				cout<<word[p]<<" "<<word1[q]<<endl;
				if(strcmp(word[p],word1[q])==0) {
					cout<<word[p]<<" ";
					break;
				}
			}	
		}
		cout<<endl;
	}
		return 0;
}