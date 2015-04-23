#include<iostream>
#include<stdio.h>
#include<cstdlib>
#include<cstring>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
	int a, b, count=0;
	char c[5], ch;
	while(scanf("%d%c%d=%s", &a, &ch, &b, c)==4){
		if(ch=='+'){
			if(a+b==atoi(c))
				count++;
		}
		else if(ch=='-'){
			if(a-b==atoi(c))
				count++;
		}
	}
	cout<<count<<endl;
	return 0;
}