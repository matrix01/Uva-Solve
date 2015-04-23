#include<iostream>
#include<stdio.h>
#include<cstdlib>
#include<cstring>
#include<string>
#include<cmath>
#include<cctype>
#include<algorithm>
using namespace std;
int d[100005], sum_div[100005];
void pre_divisors(){
	int i, j;
	d[1]=1;
	sum_div[1]=1;
	for(i=2; i<=100000; i++){
		int sqt=(int)sqrt(i);
		d[i]=2;
		sum_div[i]=1+i;
		for(j=2; j<=sqt; j++){
			if(i%j==0){
				d[i]+=2;
				sum_div[i]+=j;
				sum_div[i]+=(i/j);
			}
		}
		if(sqt*sqt==i){
				d[i]--;
				sum_div[i]-=sqt;
			}
	}
}
int main(){
	int a, b, k, t, i;
	pre_divisors();
	cin>>t;
	while(t--){
		cin>>a>>b>>k;
		long long div=0, sum=0;
		for(i=a; i<=b; i++){
			if(i%k==0){
				div+=d[i];
				sum+=sum_div[i];
			}
        }
		cout<<div<<" "<<sum<<endl;
	}

	return 0;
}