#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
	int t, n, x[25], i;
	scanf("%d",&t);
	while(t--){
		scanf("%d", &n);
		for(i=0; i<n; i++)
			scanf("%d", &x[i]);
		sort(x, x+n);
		printf("%d\n", 2*(x[n-1]-x[0]));
	}
	return 0;
}