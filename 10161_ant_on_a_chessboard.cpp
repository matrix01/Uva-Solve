#include<iostream>
#include<cmath>
using namespace std;
int main(){
	long long n;
	while(cin>>n&&n!=0){
		int sqr=ceil(sqrt(n));
		long long i, j;
		if(sqr%2==0){
			long long tmp=sqr*sqr-sqr+1;
			i=sqr;
			j=sqr;
			while(tmp<n){j--; tmp++;}
			while(tmp>n){i--; tmp--;}
		}
		else{
			long long tmp=sqr*sqr-sqr+1;
			i=sqr;
			j=sqr;
			while(tmp<n){i--; tmp++;}
			while(tmp>n){j--; tmp--;}
		}
		cout<<i<<" "<<j<<endl;
	}
	return 0;
}