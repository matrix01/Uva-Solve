#include<iostream>
#include<stdio.h>
#define fin (freopen("10963_in.txt", "r", stdin))
#define fout (freopen("10963_out.txt", "w", stdout))
using namespace std;
int main(){
	int t, y1, y2, W;
	cin>>t;
	while(t--){
		cin>>W;
		bool flag=true;
		cin>>y1>>y2;
		int dif=y1-y2;
		for(int i=1; i<W; i++){
			cin>>y1>>y2;
			if(dif!=y1-y2){
				flag=false;
			}
		}
		if(flag==true) cout<<"yes"<<endl;
		else cout<<"no"<<endl;
		if(t) cout<<endl;
	}
	return 0;
}