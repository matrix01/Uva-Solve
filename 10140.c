#include <stdio.h>
#include <math.h>
#define max(a,b) (a>b)?a:b
#define N 46500
char primes[46501];
char segprimes[1000005];
int p[100000];
unsigned int first(int lo,int i)
{
    if(lo%i==0)
            return (unsigned int)max(lo,i*i);
    else
        return (unsigned int)max(lo + (i-lo%i),i*i);
}
int main()
{
    int w,x,y,z,top,max;
    register unsigned int i, j;
    int hi,lo;
    for(i=0;i<=N;i++)
        primes[i]=0;
    primes[0]=primes[1]=1;
    for(i=4;i<=N;i+=2)
        primes[i]=1;
    for(i=3;i<=216;i+=2)
        if(!primes[i])
            for(j=i*i;j<=N;j+=i)
                primes[j]=1;
    while(scanf("%d %d",&lo,&hi)==2)
    {
        for(i=0;i<=hi-lo;i++)segprimes[i]=0;
        if(lo==1)
            segprimes[0]=1;
        max = sqrt(hi);
        for(i=2;i<=max;i++)
            if(!primes[i])
                for(j=first(lo,i);j>=lo&&j<=hi;j+=i)
                    segprimes[j-lo]=1;
        w = -1;
        x = 100000;
        y = -1;
        z = -1;
        top = 0;
        for(i=0;i<=hi-lo;i++)
            if(!segprimes[i])
                p[top++]=i+lo;
        for(i=0;i<top-1;i++)
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
