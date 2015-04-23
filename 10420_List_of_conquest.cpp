#include<iostream>
#include<cstring>
#include<stdio.h>
#include<algorithm>
using namespace std;
char name[105], country[105];

struct list{
	char country[105];
	int count;
}l[2005];

int CheckCountry(char *str, int n)
{
    int i;
    for(i=0;i<n;i++)
        if(!strcmp(l[i].country,str))
            return i;
    return -1;
}
bool comp(list l1, list l2){
	return strcmp(l1.country, l2.country)<0;
}
int main(){
	int t, k=0;
	cin>>t;
	while(t--){
		scanf("%s%*c", &country);
		int x=CheckCountry(country,k);
		if(x<0) {
			strcpy(l[k].country, country);
			l[k++].count=1;
		}
		else l[x].count++;
		gets(name);
	}
	sort(l, l+k, comp);
	for(int i=0; i<k; i++) cout<<l[i].country<<" "<<l[i].count<<endl;
	return 0;
}