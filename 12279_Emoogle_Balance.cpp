#include<iostream>
using namespace std;
int main(){
	int n, i, sq=1;
	while(cin>>n&&n){
		int party=0, treat=0, x;
		for(i=1; i<=n; i++){
			cin>>x;
			if(x==0)
				treat++;
			else party++;
		}
		cout<<"Case "<<sq++<<": "<<party-treat<<endl;
	}
	return 0;
}