#include<iostream>
#include<stdio.h>
#include<cstring>
#include<ctype.h>
#include<fstream>
using namespace std;

int main(){
	ofstream out("494_out", ios::out| ios::binary);
	char ch;
	int fl=0, count=0;
	while(ch=getchar()!='\0'){
		if(isalpha(ch)){
			if(!fl){
				count++;
				fl=1;
			}
		}
		else if(ch=='\n'){
			out<<count<<endl;
			//printf("%d\n", count);
			fl=0;
			count=0;
		}
		else{
			fl=0;
		}
	}
	out.close();
	return 0;
}