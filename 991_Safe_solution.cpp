/****************************
* Problem: catalan Numbers
* use : 2n!/(n+1)!n! formula
*****************************/

#include<iostream>
using namespace std;
int main(){
	long long fact=1, findex[22]={1};
	int index=1;
	for(int i=1; i<21; i++){
		for(int j=1; j<=i; j++){
			fact=fact*j;
		}
		findex[index++]=fact;
		fact=1;
	}
	int n, ans, f=0;
	while(cin>>n){
		if(f) cout<<endl;
		ans=findex[2*n]/(findex[n+1]*findex[n]);
		f=1;
		cout<<ans<<endl;
	}
	return 0;
}