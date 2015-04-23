//#include<iostream>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
//using namespace std;

int main(){
	char ch;
	int line=0, count=0;
	while(ch=getchar()!=EOF){
		if(isalpha(ch)){
			if(!line){
				count++;
				line=1;
			}
		}
		else if(ch=='\n'){
			printf("%d\n", count);
			line=0;
		}
		else{
			line=0;
		}
	}
	return 0;
}
