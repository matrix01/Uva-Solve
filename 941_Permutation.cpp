#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<cstring>
#include<string>
#include<cmath>
long long perm[22];
char sent[22];
using namespace std;
int comp(const void *a , const void *b){
	return *(char*)a-*(char*)b;
}
void swap(char *a, char *b){
	char w;
	w=*a;
	*a=*b;
	*b=w;
}
void permutation(char *line, long long ter, int len){
	qsort(line, len, sizeof(char),comp);
	long long d, i;
	if(ter==0)return;
	for(d=0, i=0; i<=len && (perm[len-1]*i)<=ter ; i++)
		d=perm[len-1]*i;

	swap(line, line+i-1);
	permutation(line+1, ter-d,len-1);
}
int main(){
	int t, len;
	long long n, i;
	for(perm[0]=1, i=1; i<22; i++)
		perm[i]=perm[i-1]*i;

	scanf("%d", &t);
	while(t--){
		scanf("%s%lld", &sent, &n);
		len=strlen(sent);
		permutation(sent, n, len);
		printf("%s\n", sent);
	}
	return 0;
}