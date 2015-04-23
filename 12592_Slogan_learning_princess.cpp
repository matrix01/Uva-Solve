#include<iostream>
#include<stdio.h>
#include<cstring>
#define fin (freopen("12592_in.txt","r",stdin))
#define fout (freopen("12592_out.txt","w",stdout))
using namespace std;
struct slogan{
	char line1[105];
	char line2[105];
}s[1000];
int main(){
	int p, q, i, j;
	char learn[105];
	scanf("%d%*c", &p);
	for(i=0; i<p; i++){
		gets(s[i].line1);
		gets(s[i].line2);
	}
	scanf("%d%*c", &q);
	for(i=0; i<q; i++){
		gets(learn);
		for(j=0; j<p; j++){
			if(strcmp(learn, s[j].line1)==0)
				cout<<s[j].line2<<endl;
		}
	}
	return 0;
}