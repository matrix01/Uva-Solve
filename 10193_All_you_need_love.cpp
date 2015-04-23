#include<iostream>
#include<stdio.h>
#include<cstdlib>
#include<cstring>
#include<string>
#include<cmath>
#include<cctype>
#include<algorithm>
using namespace std;
char input[100];
int binary_to_integer(const char * str){
    int val = 0;
    while (*str != '\0')
        val = 2 * val + (*str++ - '0');
    return val;
}
int gcd(int a, int b){
	if(b==0) return a;
	return gcd(b, a%b);
}
int main(){
	int s1, s2, N, i;
	scanf("%d%*c", &N);
	for(i=1; i<=N; i++){
		cin>>input;
		s1=binary_to_integer(input);
		cin>>input;
		s2=binary_to_integer(input);
		if((gcd(s1, s2))==1)
			printf("Pair #%d: Love is not all you need!\n", i);
		else
			printf("Pair #%d: All you need is love!\n", i);
	}
	return 0;
}