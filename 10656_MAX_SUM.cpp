#include<iostream>
using namespace std;
int main(){
	int t, i, j=0;
	while(cin>>t){
		if(t==0)break;
		bool first=true;
		for(i=0; i<t; i++){
			cin>>j;
			if(j!=0){
				if(!first) cout<<" ";
				cout<<j;
				first=false;
			}
		}
		if(first) cout<<"0";
		cout<<endl;
	}

	return 0;
}