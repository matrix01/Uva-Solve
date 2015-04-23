#include<iostream>
using namespace std;
int main(){
	int t, i, rem, n, count[10];
	for(i=0; i<10; i++)
		count[i]=0;
	cin>>t;
	while(t--){
		cin>>n;
		for(i=1; i<=n; i++){
			int d=i;
			while(d!=0){
				rem=d%10;
				count[rem]++;
				d=d/10;
			}
		}
		
		for(i=0; i<10; i++){
			cout<<count[i];
			if(i<9)
				cout<<" ";
		}
		cout<<endl;
		
		for(i=0; i<10; i++)
			count[i]=0;
	}
	return 0;
}