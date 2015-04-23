#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;
int main(){
	int t, len;
	char msg[1000];
	bool flag=false;
	char encode[]={"3014985726"};
	char decode[]={"EOIAPBSTZG"};
	scanf("%d%*c", &t);
	while(t--){
		while(gets(msg)){
			len=strlen(msg);
			if(!len) break;
			for(int i=0; i<len; i++){
				for(int j=0; j<10; j++){
					if(msg[i]==encode[j]){
						msg[i]=decode[j];
					}
				}
			}
			cout<<msg<<endl;
		}
		if(t)cout<<endl;
	}
	return 0;
}