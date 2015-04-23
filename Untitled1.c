#include<stdio.h>
void main()
{
	char ch;
	char n;
	scanf("%c", &ch);
	
	if(ch>='a' && ch<='z')
		n='A'+(ch-'a');
	printf("%c", n);
}

