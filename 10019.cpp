#include<iostream>
using namespace std;
int main(){
	long int x, t, i, bin, n, binbit, hexbit, hex;
	cin>>t;
	while(t--){
		cin>>n;
		bin=n;
		hex=n;
		binbit=0;
		hexbit=0;
		while(bin!=0){
			x=bin%2;
			if(x==1)
				binbit++;
			bin=bin/2;
		}
		while(hex!=0){
			x=hex%10;
			if(x==0) hexbit++;
			else if(x==1||x==2||x==4||x==8) hexbit+=1;
			else if(x==3||x==5||x==6||x==9) hexbit+=2;
			else if(x==7) hexbit+=3;
			hex=hex/10;
		}
		cout<<binbit<<" "<<hexbit<<endl;
	}
	return 0;
}