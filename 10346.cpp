#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
	int n, k;
	while((scanf("%d%d", &n, &k))!=EOF){
		int sumcig=n+(n-1)/(k-1);
			cout<<sumcig<<endl;;
	}

	return 0;
}