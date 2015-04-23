#include<iostream>
using namespace std;
int main(){
	int k, x, y;
	int a, b;
	while(cin>>k){
		if(k==0) break;
		cin>>a>>b;
		for(int i=0; i<k; i++){
			cin>>x>>y;
			x-=a; y-=b;
			if(x*y==0) cout<<"divisa"<<endl;
			else if(x>0 && y>0) cout<<"NE"<<endl;
			else if(x<0 && y>0) cout<<"NO"<<endl;
			else if(x>0 && y<0) cout<<"SE"<<endl;
			else cout<<"SO"<<endl;
		}
	}

	return 0;
}