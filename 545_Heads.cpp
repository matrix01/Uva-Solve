#include<iostream>
#include<cstdio>
#define EPS 1e-9
double b[9005];
int expnt[9005];
using namespace std;
int main(){
	int i;
	b[0]=1;
	expnt[0]=0;
	for(i=1; i<9005; i++){
		b[i]=b[i-1]/2.0;
		expnt[i]=expnt[i-1];
		if(b[i]<1){
			b[i]=b[i]*10;
			expnt[i]++;
		}
	}
	int n;
	scanf("%d", &i);
	while(i--){
		scanf("%d", &n);
		printf("2^-%d = %.3lfE-%d\n",n,b[n]+EPS,expnt[n]);
	}
	return 0;
}