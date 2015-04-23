#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
const long long int M=20000005;
bool is[20000005];
long long int prime[1270608],top=0;
void prime_sieve(){
    int i,j,k=0;
    for(i=2;i<M;i++)
        if(!is[i]){
            for(j=i+i;j<M;j+=i)
                is[j]=true;
            prime[top++]=i;
        }
}
int main(){
	prime_sieve();
	long long n, ans, count, i, j, res, temp;
	while(scanf("%lld", &n)&&n){
		printf("%lld ", n);
		n=4*n-3;
		ans=n==1?2:1;
		res=0;
		for(i=1; i<top &&prime[i]*prime[i]<=n; i++){
			if(n<2000000 && !is[n])break;
			count=0;
			while(n%prime[i]==0){
				count++;
				n/=prime[i];
			}
			if(count>0){
				res=1;
				ans*=(count+1);
			}
		}
		if(n!=1)ans*=2;
		printf("%lld\n", ans);
	}
	return 0;
}