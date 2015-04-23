#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
	int p, b, h, w, i;
	while(cin>>p>>b>>h>>w){
		int cost=b+1;
		while(h--){
			int pric=0, bed=0;
			cin>>pric;
			for(i=1; i<=w; i++){
				cin>>bed;
				if(bed>=p)
					if(cost>(p*pric))
					cost=p*pric;
			}
		}
		if(cost<b)
			cout<<cost<<endl;
		else
			cout<<"stay home"<<endl;
	}

	return 0;
}