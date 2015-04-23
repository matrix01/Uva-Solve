#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <limits>
using namespace std;
int main(){
	int t, n, i, j;
	cin>>t;
	for(i=1; i<=t; i++){
		cin>>n;
		long long res=1;
		for(j=0; j<n-2; j++)
			res=(res*n)%2000000011;
		printf("Case #%d: %d\n", i, res);
	}
	return 0;
}