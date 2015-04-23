#include<iostream>
#include<cstring>
#include<cstdio>
#include<algorithm>
using namespace std;

char Name[105],C[105];
struct lst
{
    char Country[105];
    int count;
}List[2005];

int FindID(char[],int);
bool comp(lst,lst);

int main()
{
    int n,i,id,k=0;
   // freopen("in.txt","r",stdin);
    scanf("%d\n",&n);

    while(n--)
    {
        scanf("%s",C);
        id = FindID(C,k);
        cout<<id<<endl;
        if(id<0)
        {
            strcpy(List[k].Country,C);
            List[k++].count = 1;
        }
        else
            List[id].count++;
        gets(Name);
    }
    sort(List,List+k,comp);

    for(i=0;i<k;i++)
        printf("%s %d\n",List[i].Country,List[i].count);
    return 0;
}

int FindID(char str[],int n)
{
    int i;
    for(i=0;i<n;i++)
        if(!strcmp(List[i].Country,str))
            return i;
    return -1;
}

bool comp(lst l1,lst l2)
{
    return strcmp(l1.Country,l2.Country)<0;
}

