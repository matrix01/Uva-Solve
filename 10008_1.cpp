/*
*************************************************
* I spent on gets. Check this later...
* I have to figure out the problem with t=t+1;
*************************************************
*/

#include<stdio.h>
#include<string.h>
struct cry{
		int asci;
		int fre;	
	}f[128], f1;
int main(){
	char sent[1000];
	int t, i;
	for(i=0; i<128; i++){
			f[i].asci=0;
			f[i].fre=0;
		}
	scanf("%d", &t);
		t=t+1;
		while(t--){
			gets(sent);
			for(i=0; sent[i]; i++){
				if(sent[i]>=65&&sent[i]<=92){
					int temp=sent[i];
					f[temp].fre++;
					f[temp].asci=temp;
				}
				else if(sent[i]>=97&&sent[i]<=122){
					int temp=sent[i]-32;
					f[temp].fre++;
					f[temp].asci=temp;
				}
			}
		}
		int j;
		for(i=1; i<128; i++){
			for(j=0; j<i; j++){
				if(f[j].fre<f[i].fre){
					f1=f[j];
					f[j]=f[i];
					f[i]=f1;
				}
				else if(f[i].fre==f[j].fre){
					if(f[i].asci<f[j].asci){
						f1=f[j];
						f[j]=f[i];
						f[i]=f1;
					}
				}
			}
		}
		for(i=0; i<128; i++){
			if(f[i].fre>0){
				char ch=f[i].asci;
				printf("%c %d\n", ch, f[i].fre);
			}
		}
	return 0;
}