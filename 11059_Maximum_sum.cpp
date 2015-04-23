#include<iostream>
using namespace std;
int a[20];
long long int maxproduct(int n){
	long long int max=0;
	for(int i=0; i<n; i++){
		long long int p=1;
		for(int j=i; j<n&&p; j++){
			p*=a[j];
			if(p>max){
				max=p;
			}
		}
	}
	return max;
}
int main(){
	int N, sq=0;
	while(cin>>N){
		for(int i=0; i<N; i++)
			cin>>a[i];
		cout<<"Case #"<<++sq<<": The maximum product is "<<maxproduct(N)<<"."<<endl<<endl;
	}
	return 0;
}