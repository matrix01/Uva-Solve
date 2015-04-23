#include<iostream>
#include<string.h>
using namespace std;
int main01(){
	int I;
	char bin[1000], pbin[1000];
	while(1){
		int count=0;
		int inl=0;
		cin>>I;
		if(I==0)
			break;
		while(I>0){
			int r=I%2;
			I=I/2;
			bin[inl++]=r+48;
			if(r==1)
				count++;
		}
		int i=0;
		while(inl--){
			pbin[i++]=bin[inl];
		}

		pbin[i]='\0';
		cout<<"The parity of "<<pbin<<" is "<<count<<" (mod 2)."<<endl;
	}

	return 0;
}