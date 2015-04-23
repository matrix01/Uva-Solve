#include<iostream>
using namespace std;
int main(){
	int k;
	while(cin>>k){
		int count=0;
		for(int i=k+1; i<=2*k; i++)
			if((i*k)%(i-k)==0)
				count++;
		cout<<count<<endl;
		for(int i=k+1; i<=2*k; i++)
			if((i*k)%(i-k)==0)
				cout<<1<<"/"<<k<<" = 1/"<<(i*k)/(i-k)<<" + 1/"<<i<<endl;
	}
	return 0;
}