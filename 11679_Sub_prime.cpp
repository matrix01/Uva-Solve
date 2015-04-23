#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	int bank, n;
	while(cin>>bank>>n){
		int flag=1;
		int reserve[35];
		if(bank==0&&n==0) break;
		for(int i=1; i<=bank; i++) cin>>reserve[i];
		int d, c, v;
		for(int i=0; i<n; i++){
			cin>>d>>c>>v;
			reserve[d]-=v;
			reserve[c]+=v;
		}
		for(int i=1; i<=bank; i++){
			if(reserve[i]<0){
				flag=0;
				break;
			}
		}
		if(flag!=0)
			cout<<"S\n";
		else
			cout<<"N\n";
	}

	return 0;
}