#include<iostream>
#include<stdio.h>
#include<cstdlib>
#include<cstring>
#include<string>
#include<cmath>
#include<cctype>
#include<algorithm>
#define fin (freopen("382_in.txt","r",stdin))
#define fout (freopen("382_out.txt","w",stdout))
using namespace std;
int main(){
	int sum, i, N;
	cout<<"PERFECTION OUTPUT"<<endl;
	while(scanf("%d", &N)!=EOF){
		if(N==0){
			cout<<"END OF OUTPUT"<<endl;
			break;
		}
		sum=0;
		int mid=N/2;
		for(i=1; i<=mid; i++)
			if(N%i==0)
				sum+=i;
		if(sum==N) 
			printf("%5d  PERFECT\n", N);
		else if(sum<N) 
			printf("%5d  DEFICIENT\n", N);
		else 
			printf("%5d  ABUNDANT\n",N);
	}
	return 0;
}