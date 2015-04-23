#include<iostream>
#include<stdio.h>
#include<cstring>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;
#define max(a,b) (a>b)?a:b
#define N 46500
char primes[46501];
char segprimes[1000005];
int p[100000];
unsigned int first(int low,int i){
    if(low%i==0)
            return (unsigned int)max(low,i*i);
    else
        return (unsigned int)max(low + (i-low%i),i*i);
}
void prime_sieve(){
	int i, j;
    for(i=0;i<=N;i++)
        primes[i]=0;
    primes[0]=primes[1]=1;
    for(i=4;i<=N;i+=2)
        primes[i]=1;
    for(i=3;i<=216;i+=2)
        if(!primes[i])
            for(j=i*i;j<=N;j+=i)
                primes[j]=1;
}

int main(){
	prime_sieve();
	int high, low, max, x, y, w, z;
	while(cin>>low>>high){
		for(int i=0;i<=high-low;i++)segprimes[i]=0;
        if(low==1)
		segprimes[0]=1;
        max = sqrt(high);
        int i,j;
		for(i=2;i<=max;i++)
            if(!primes[i])
                for(j=first(low,i);j>=low&&j<=high;j+=i)
                    segprimes[j-low]=1;
		w = -1;
        x = 100000;
        y = -1;
        z = -1;
        int k = 0;
        for(i=0;i<=high-low;i++)
            if(!segprimes[i])
                p[k++]=i+low;
        for(i=0;i<k-1;i++)
        {
            if(p[i+1]-p[i]<x-w)
            {
                w=p[i];
                x=p[i+1];
            }
            if(p[i+1]-p[i]>z-y)
            {
                y=p[i];
                z=p[i+1];
            }
        }
		if(y>0)
            printf("%d,%d are closest, %d,%d are most distant.\n",w,x,y,z);
        else
            puts("There are no adjacent primes.");
	}
	return 0;
}