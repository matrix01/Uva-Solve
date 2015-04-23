#include<stdio.h>
#include<stdlib.h>
int a[50001];
void bs_low(int x,int len){
	int first, mid, last;
	first=0;
	last=len-1;
	while(last-first>1){
		mid=(first+last)/2;
		if(a[mid]>x)
			last=mid;
		else if(a[mid]<x){
			first=mid;
		}
		else{
			last=mid;
			break;
		}
	}
	if(a[last]<=x)
		printf("%d ", a[last]);
	else if(a[first]<=x)
		printf("%d ", a[first]);
	else printf("X ");
}
void bs_high(int x,int len){
	int first, mid, last;
	first=0;
	last=len-1;
	while(last-first>1){
		mid=(first+last)/2;
		if(a[mid]>x)
			last=mid;
		else if(a[mid]<x){
			first=mid;
		}
		else{
			first=mid;
			break;
		}
	}
	if(a[first]>=x)
		printf("%d\n", a[first]);
	else if(a[last]>=x)
		printf("%d\n", a[last]);
	else printf("X\n");
}
int main(){
	int i, n, q, x;
	for(i=0; i<50000; i++)a[i]=0;
	scanf("%d", &n);
		for(i=0; i<n; i++)scanf("%d", &a[i]);
		scanf("%d", &q);
		while(q--){
			scanf("%d", &x);
			x--;
			bs_low(x, n);
			x+=2;
			bs_high(x, n);
		}
	return 0;
}