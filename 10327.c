/*
* Problem Id: 10327
  Status : Solved
  By Milan

*/
#include<stdio.h>
void main(){
	int i, j, n, a[1005], x, m;
	int t;
	while(scanf("%d", &n)!=EOF){
		m=0;
		for(x=0; x<n; x++){
			scanf("%d",&a[x]);
		}
		for(i=1; i<n; i++){
			for(j=n-1; j>=i; j--){
				if(a[j-1]>a[j]){
					t=a[j-1];
					a[j-1]=a[j];
					a[j]=t;
					m++;
				}
			}
		}
		printf("Minimum exchange operations : %d\n", m);
	}
}
