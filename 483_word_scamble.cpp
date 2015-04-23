#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <cstring>
#include <cctype>
#include <stack>
#include <queue>
#include <vector>
#include <map>
#include <sstream>
#include <set>
#include <math.h>
#define fin (freopen("443_in.txt","r",stdin))
#define fout (freopen("443_out.txt","w",stdout))
using namespace std;
int main(){
	char msg[1000], word[1000], word1[1000];
	int len1, t, i, j=0, k, x;
	while(gets(msg)){
		len1=strlen(msg);
		for(i=0; i<=len1; i++){
			if(msg[i]!=' '&& msg[i]!='\0'){
				word[j++]=msg[i];
			}
			else{
				word[j]='\0';
				cout<<word<<endl;
				k=0;
				if(strcmp(word, ".-")==0) word1[k++]='A';
				else if(strcmp(word, "-...")==0) word1[k++]='B';
				else if(strcmp(word, "-.-.")==0) word1[k++]='C';
				else if(strcmp(word, "-..")==0) word1[k++]='D';
				else if(strcmp(word, ".")==0) word1[k++]='E';
				else if(strcmp(word, "..-.")==0) word1[k++]='F';
				else if(strcmp(word, "- -.")==0) word1[k++]='G';
				else if(strcmp(word, "....")==0) word1[k++]='H';
				else if(strcmp(word, "..")==0) word1[k++]='I';
				else if(strcmp(word, ".- - -")==0) word1[k++]='J';
				else if(strcmp(word, "-...")==0) word1[k++]='K';
				else if(strcmp(word, "-.-.")==0) word1[k++]='L';
				else if(strcmp(word, "-..")==0) word1[k++]='M';
				else if(strcmp(word, "-...")==0) word1[k++]='N';
				else if(strcmp(word, "-.-.")==0) word1[k++]='O';
				else if(strcmp(word, "-...")==0) word1[k++]='P';
				else if(strcmp(word, "-.-.")==0) word1[k++]='Q';
				else if(strcmp(word, "-..")==0) word1[k++]='R';
				else if(strcmp(word, "-..")==0) word1[k++]='S';
				else if(strcmp(word, "-...")==0) word1[k++]='T';
				else if(strcmp(word, "-.-.")==0) word1[k++]='U';
				else if(strcmp(word, "-..")==0) word1[k++]='V';
				else if(strcmp(word, "-...")==0) word1[k++]='W';
				else if(strcmp(word, "-.-.")==0) word1[k++]='X';
				else if(strcmp(word, "-..")==0) word1[k++]='Y';
				else if(strcmp(word, "-...")==0) word1[k++]='Z';
				else if(strcmp(word, "-.-.")==0) word1[k++]='0';
				else if(strcmp(word, "-..")==0) word1[k++]='1';
				else if(strcmp(word, "-...")==0) word1[k++]='2';
				else if(strcmp(word, "-.-.")==0) word1[k++]='3';
				else if(strcmp(word, "-..")==0) word1[k++]='4';
				else if(strcmp(word, "-.-.")==0) word1[k++]='5';
				else if(strcmp(word, "-..")==0) word1[k++]='6';
				else if(strcmp(word, "-...")==0) word1[k++]='7';
				else if(strcmp(word, "-.-.")==0) word1[k++]='8';
				else if(strcmp(word, "-..")==0) word1[k++]='9';
				else if(strcmp(word, "-.-.")==0) word1[k++]='.';
				else if(strcmp(word, "-..")==0) word1[k++]=',';
				else if(strcmp(word, "-...")==0) word1[k++]='?';
				else if(strcmp(word, "-.-.")==0) word1[k++]=39;
				else if(strcmp(word, "-..")==0) word1[k++]='!';
				else if(strcmp(word, "-.-.")==0) word1[k++]='/';
				else if(strcmp(word, "-..")==0) word1[k++]='(';
				else if(strcmp(word, "-...")==0) word1[k++]=')';
				else if(strcmp(word, "-.-.")==0) word1[k++]='&';
				else if(strcmp(word, "-..")==0) word1[k++]=':';
				else if(strcmp(word, "-.-.")==0) word1[k++]=';';
				else if(strcmp(word, "-..")==0) word1[k++]='=';
				else if(strcmp(word, "-.-.")==0) word1[k++]='+';
				else if(strcmp(word, "-..")==0) word1[k++]='-';
				else if(strcmp(word, "-...")==0) word1[k++]='_';
				else if(strcmp(word, "-.-.")==0) word1[k++]='"';
				else if(strcmp(word, "-..")==0) word1[k++]='@';
				j=0;
			}
		}
	}
	return 0;
}