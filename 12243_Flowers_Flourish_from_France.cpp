#include<iostream>
#include<stdio.h>
#include<cstdlib>
#include<cstring>
#include<string>
#include<cmath>
#include<cctype>
#include<algorithm>
using namespace std;
int main(){
	char msg[10000], word[1000][1000];
	int len1, t;
	while(gets(msg)){
		if(strcmp(msg, "*")==0) break;
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
		bool flag=false;
		char ch, ch1;
		if(word[0][0]>=65&&word[0][0]<=92){
			ch=word[0][0];
			ch1=word[0][0]+32;
		}
		else{
			ch=word[0][0]-32;
			ch1=word[0][0];
		}
		for(int j=0; j<k; j++){
			if(ch==word[j][0]||ch1==word[j][0]){
				flag=true;
			}
			else{
				flag=false;
				break;
			}
		}
		if(flag==true)
			cout<<"Y"<<endl;
		else
			cout<<"N"<<endl;
	}
	return 0;
}