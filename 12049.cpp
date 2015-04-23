#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int t, n, m, a[1001], b[1001];
	cin>>t;
	while(t--){
		cin>>n>>m;
		for(int i=0; i<n; i++){
			cin>>a[i];	
		}
		for(int j=0; j<m; j++){
			cin>>b[j];
		}
		sort(a, a+n);
		sort(b, b+m);
		int count=0;
		int k, l;
		for(k=0,l=0; k<n; k++, l++){
				if(a[k]!=b[l])
					count++;
		}
/*		if(m>n){
			count=count+(m-n);
		}
		if(n>m){
			count=count+(n-m);
		}*/
	cout<<count<<endl;
	}

	return 0;
}