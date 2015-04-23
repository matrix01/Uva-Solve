#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
	int x, y;
	while(scanf("%d%d", &x, &y)!=EOF){
		printf("%d\n", ((x*y))-1);
	}
	return 0;
}