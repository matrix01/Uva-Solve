#include<iostream>
using namespace std;
int main(){
	int t, x, y;
	cin>>t;
	while(t--){
		cin>>x>>y;
		if((x-1)%(y-1)!=0) cout<<"cannot do this"<<endl;
		else cout<<(x-1)/(y-1)<<endl;
	}
	return 0;
}