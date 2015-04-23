#include<iostream>
#include<stdio.h>
#include<cstdlib>
#include<cstring>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;
long long a[100100];
int main(){
	long long index=0, n;
	while(scanf("%lld", &n)!=EOF){
		a[index++]=n;
		sort(a, a+index);
		if((index%2)!=0)
			printf("%lld\n", a[(index/2)]);
		else
			printf("%lld\n", (a[index/2]+a[(index/2)-1])/2);
	}
	return 0;
}