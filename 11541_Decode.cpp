#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main(){
	char a, sent[100];
	int total, t, i, j;
	scanf("%d%*c", &t);
	for(i=1; i<=t; i++){
		gets(sent);
		int len=strlen(sent);
		printf("Case %d: ", i);
		for(j=0; j<len; j++){
			if(sent[j]>='A'&&sent[j]<='Z')
				a=sent[j];
			else if(sent[j]>='0'&&sent[j]<='9'){
				total=0;
				while(sent[j]>='0'&&sent[j]<='9'){
					total=(total*10)+sent[j]-48;
					j++;
				}
				j--;
				for(int k=0; k<total; k++)
					printf("%c", a);
			}
		}
		cout<<endl;
	}
	return 0;
}
