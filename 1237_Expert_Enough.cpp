#include<iostream>
#include<stdio.h>
#include<cstring>
#define fin (freopen("1237_in.txt", "r", stdin))
#define fout (freopen("1237_out.txt", "w", stdout))
using namespace std;
struct manc{
	char brand[1000];
	long long L, H;
}temp[100000];
int main(){
	int D, Q, P, T;
	cin>>T;
	while(T--){
		cin>>D;
		for(int i=0; i<D; i++){
			cin>>temp[i].brand;
			cin>>temp[i].L;
			cin>>temp[i].H;
		}
		cin>>Q;
		while(Q--){
			int count=0;
			cin>>P;
			int x;
			for(int i=0; i<D; i++){
				if(temp[i].L<=P &&temp[i].H>=P){
					x=i;
					count++;
					if(count>1) break;
				}
			}
			if(count==1)
				cout<<temp[x].brand<<endl;
			else cout<<"UNDETERMINED"<<endl;
		}
		if(T) cout<<endl;
	}
	return 0;
}