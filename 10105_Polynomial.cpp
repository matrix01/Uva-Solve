#include<iostream>
using namespace std;
int main(){
	int i, j,n, k, dig;
	long int fact[16];
	long int temp;
	fact[0]=1;
	fact[1]=1;
	for(i=2; i<14; i++){
		fact[i]=fact[i-1]*i;
	}
	while(cin>>n>>k){
		temp=fact[n];
		for(j=0; j<k; j++){
			cin>>dig;
			if(dig>1){
				temp/=fact[dig];
			}
		}
		cout<<temp<<endl;
	}

	return 0;
}