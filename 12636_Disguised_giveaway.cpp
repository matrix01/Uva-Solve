/*Do Later*/

#include<iostream>
#include<stdio.h>
#include<cmath>
#include<algorithm>
int a[19901], result[100000];
using namespace std;
int main(){
	int n, t, input;
	cin>>t;
	while(t--){
		cin>>n;
		input=(n*(n-1))/2;
		for(int i=0; i<input; i++)
			cin>>a[i];
		sort(a, a+input);
		for(int i)
	}

	return 0;
}