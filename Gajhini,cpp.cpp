#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int t, d;
	int i, j, z, k, a[100000], b[100000], c[100000], n, m, x;
	cin>>t;
	for(z=1; z<=t; z++){
		cin>>n;
		cin>>d;
		for(i=0; i<n; i++)
			cin>>a[i];
		x=0;
		for(j=0; j<=n-d; j++){
			k=j;
			for(m=0; m<d; m++){
				b[m]=a[k++];
			}
			cout<<a[k];
			sort(b, b+d);
			c[x++]=b[d-1]-b[0];
		}
		sort(c, c+x);
		cout<<"Case"<<z<<": "<<c[x-1]<<endl;
	}
	return 0;
}
