#include<stdio.h>
#include<string.h>
int main()
{
	char str[100], temp[100];
	int g, len,j, k, glen;
	
	while(scanf("%d", &g)&& g)
	{
			scanf("%s", str);
		len=strlen(str);
		glen=len/g;
		for(j=glen, k=0; k<len; k++)
		{
				temp[j--]=str[k];
				if(!(j%glen))
				{
					j=j+glen*2;
				}
		}
		temp[len]='\0';
		printf("%s", temp);
	}
	return 0;
}
