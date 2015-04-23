#include<stdio.h>
#include<string.h>
int main(){
	int len=0, count=0, t;
	char num[100];
	scanf("%d", &t);
	while(t--){
		scanf("%s",&num);
		len=strlen(num);
		if(len==5) printf("3\n");
		else{
			count=0;
			if(num[0]=='t')count++;
			if(num[1]=='w')count++;
			if(num[2]=='o')count++;
			
			if(count>=2) printf("2\n");
			else printf("1\n");
		}
	}
	return 0;
}
