#include<stdio.h>
#include<string.h>
int main()
{
	char str[100], temp[100];
	int g=0, d, len,j, k, glen, count;
	
	while(scanf("%d", &g)&& g!=0)
	{
		scanf("%s", str);
		len=0;
		k=0;
		j=0;
		glen=0;
		len=strlen(str);
		glen=len/g;
		d=glen;
		printf("%d %d %d\n", len, g, glen);
		j=glen-1;	
		count=0;
			for(k=0; k<len; k++)
			{
					printf("%d %d\n", j, k);
					temp[j--]=str[k];
					count++;
					if(d-1==count)
					{
						glen=k+glen-1;
						j=glen;
						printf("\n%d %d %d\n\n", glen, j, count);
						count=0;					
					}
			}
		temp[len]='\0';
		printf("%s\n", str);
		printf("%s\n", temp);
	}
	return 0;
}
