#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;
int main(){
	char num[100];
	int len, n;
	while(1){
		gets(num);
		len=strlen(num);
		if(len>=2){
			if(num[1]=='x'){
				sscanf(num, "%X", &n);
				cout<<n<<endl;
			}
			else{
				sscanf(num, "%d", &n);
				if(n<0) break;
				printf("0x%X\n", n);
			}
		}
		else{
			sscanf(num, "%X", &n);
			if(n<0) break;
			printf("0x%X\n", n);
		}
	}
	return 0;
}
