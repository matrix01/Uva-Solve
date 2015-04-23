#include<iostream>
using namespace std;
int main(){
	int s, a[13], n[13], i, sq=1;
	while(cin>>s){
		if(s<0) break;
		for(i=0; i<12; i++)
			cin>>a[i];
		for(i=0; i<12; i++)
			cin>>n[i];
		cout<<"Case "<<sq++<<":"<<endl;
		for(i=0; i<12; i++){
			if(n[i]<=s){
				cout<<"No problem! :D"<<endl;
				s-=n[i];
			}
			else
				cout<<"No problem. :("<<endl;
			s+=a[i];
		}
	}
	return 0;
}