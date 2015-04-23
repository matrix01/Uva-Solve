#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
	int t, a, b, c, d, h1, h2, h3, h4, m1, m2, m3, m4, sq=1;
	char c1, c2, c3, c4;
	cin>>t;
	while(t--){
		scanf("%d%c%d%c%d%c%d", &h1, &c1, &m1, &c2, &h2, &c3, &m2);
		scanf("%d%c%d%c%d%c%d", &h3, &c1, &m3, &c2, &h4, &c3, &m4);
		a=0; b=0; c=0; d=0;
		a=(h1*60)+m1;
		b=(h2*60)+m2;
		c=(h3*60)+m3;
		d=(h4*60)+m4;
		if(h1<a&&d<a){
			if(c<b) cout<<"Case "<<sq++<<": Hits Meeting"<<endl;
			else cout<<"Case "<<sq++<<": Mrs Meeting"<<endl;
		}
		else if(c>a&&d>a){
			if(c>b) cout<<"Case "<<sq++<<": Hits Meeting"<<endl;
			else cout<<"Case "<<sq++<<": Mrs Meeting"<<endl;
		}
		else cout<<"Case "<<sq++<<": Mrs Meeting"<<endl;
	}

	return 0;
}