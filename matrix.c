#include<stdio.h>
int main(void)
{
int n;
int m[26][26],i,j,ed=0,nd=0,ad=0,aed=0;
//char a,b,c,d,e;
printf("enter your desire\n");
scanf("%d",&n);
printf("now begin\n");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&m[i][j]);
}
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(m[i][j]!=0)
{
ed=ed+m[i][j];
if(m[i][j]>1)
{
ad=m[i][j]-1;
aed=aed+ad;
}

printf("%d is connected with %d for %d times\n",m[i],m[j],m[i][j]);
}
else
{
nd++;
}
}
}
printf("no of total edge is %d\n",ed);
printf("no of total alternet edge is %d\n",aed);
printf("%d elements are not connected\n",nd);
}
