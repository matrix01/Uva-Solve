#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main ()
{
  long long int i, t, l, j;
  int buffer [33];
  while(scanf("%lld", &i)&&i!=0){
	  t=0;
	  l=0;
	  while(i>0){
		buffer[l++]=i%2;
		i=i/2;
	  }
	  printf("The parity of ");
	  for(j=l-1; j>=0; j--){
		  if(buffer[j]==1)
			  t++;
		  cout<<buffer[j];
	  }
	  printf(" is %lld (mod 2).\n",t);
  }
  return 0;
} 