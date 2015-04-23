#include<iostream>
#include<cstdio>
using namespace std;
int flipcount(int *p, int n){
	int count=0, i, j, t;
	for(i=0; i<n; i++){
		for(j=n-1; j>=i; j--){
			if(p[i]>p[j]){
				t=p[i];
				p[i]=p[j];
				p[j]=t;
				count++;
			}
		}
	}
	return count;
}

int main(){
	int n, i;
	int count;
	int a[1005];
	while(scanf("%d", &n)!=EOF){
		for(i=0; i<n; i++){
			scanf("%d", &a[i]);
		}
		count=flipcount(a, n);
		printf("Minimum exchange operations : %d\n", count);
	}
	return 0;
}