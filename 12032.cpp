#include<iostream>
using namespace std;
int main(){
	int ar[100010], t, k=1, n;
	
	cin>>t;
	while(t--){
		cin>>n;
		ar[0]=0;
		for( int i=1; i<=n; i++)
			cin>>ar[i];

		int mx=-100000000;
		for( int i=1; i<=n; i++)
			if(ar[i]-ar[i-1]>mx)
				mx=ar[i]-ar[i-1];

		int res=mx;
		for( int i=1; i<=n; i++){
			if(ar[i]-ar[i-1]>mx){
				res++;
				break;
			}
			if(ar[i]-ar[i-1]==mx)
				mx--;
		}
		cout<<"Case "<<k++<<": "<<res<<endl;
	}
	return 0;
}