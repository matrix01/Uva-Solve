#include<iostream>
using namespace std;
int main(){
	int t, n, i, p, a[10000];
	cin>>t;
	while(t--){
		cin>>n>>p;
		for(i=0; i<p; i++){
			cin>>a[i];
		}
		int sum=0;
		for(int j=0; j<p; j++){
			sum+=a[j];
			if(sum==n){
				cout<<"Yes"<<endl;
				break;
			}
		}
		if(sum!=n)
			cout<<"No"<<endl;
	}

	return 0;
}