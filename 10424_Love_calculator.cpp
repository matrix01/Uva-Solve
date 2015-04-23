#include <stdio.h>
#include <string.h>
int main(){
char str[40],str1[40];

int sum1,sum,sum2;
int k,j;
float n=0;
while(gets(str1)){
	n=0;
	sum=0,sum1=0;
	gets(str);
	j=strlen(str);
	for(k=0; k<j; k++)
		if(str[k]>64 && str[k]<91)
			sum+=((str[k]-'A')+1);
		else if(str[k]>96 && str[k]<123)
			sum+=((str[k]-'a')+1);
	if(sum%9!=0)
		sum=sum%9;
	else
		sum=9;
	j=strlen(str1);
	for(k=0; k<j; k++)
		if(str1[k]>64 && str1[k]<91)
			sum1+=((str1[k]-'A')+1);
		else if(str1[k]>96 && str1[k]<123)
			sum1+=((str1[k]-'a')+1);
	if(sum1%9!=0)
		sum1=sum1%9;
	else
		sum1=9;

	if(sum>sum1){
		n=(((float)sum1/(float)sum)*100);
		printf("%.2f %%\n",n);
	}
	else{
		n=(((float)sum/(float)sum1)*100);
		printf("%.2f %%\n",n);
	}
	}

return 0;
}