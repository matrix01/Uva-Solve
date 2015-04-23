#include<iostream>
#include<stdio.h>
#include<cstring>
int main(){
	char sent[35];
	while(scanf("%s", &sent)!=EOF){
		int l=strlen(sent);
		for(int i=0; i<l; i++){
			switch (sent[i])
			{
				case 'A': {printf("2");break;}
				case 'B': {printf("2");break;}
				case 'C': {printf("2");break;}
				case 'D': {printf("3");break;}
				case 'E': {printf("3");break;}
				case 'F': {printf("3");break;}
				case 'G': {printf("4");break;}
				case 'H': {printf("4");break;}
				case 'I': {printf("4");break;}
				case 'J': {printf("5");break;}
				case 'K': {printf("5");break;}
				case 'L': {printf("5");break;}
				case 'M': {printf("6");break;}
				case 'N': {printf("6");break;}
				case 'O': {printf("6");break;}
				case 'P': {printf("7");break;}
				case 'Q': {printf("7");break;}
				case 'R': {printf("7");break;}
				case 'S': {printf("7");break;}
				case 'T': {printf("8");break;}
				case 'U': {printf("8");break;}
				case 'V': {printf("8");break;}
				case 'W': {printf("9");break;}
				case 'X': {printf("9");break;}
				case 'Y': {printf("9");break;}
				case 'Z': {printf("9"); break;}
				default: {printf("%c",sent[i]);break;}
			}
		}
		printf("\n");
	}
	return 0;
}