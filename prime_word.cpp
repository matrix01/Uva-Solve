#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
void prime(){
	int a[1000];
	int i, j, primel, fl=1;
	for(i=0; i<500; i++){
		if(i%2==0)
			break;
		for(j=3; j<sqrt(i); j=j+2)
			if(i%j==0)
				break;
			else
				a[primel++]=i;
	}
	for(int k=0; k<primel; k++)
		cout<<a[k];
}
int main(){
	int a[128], val=1, i=0, sum;
	for(int i='a'; i<='z'; i++)
		a[i]=val++;
	for(int i='A'; i<='Z'; i++)
		a[i]=val++;

	char sent[100];
	while(1){
		sum=0;
		int fl=0;
		cin>>sent;
		int l=strlen(sent);
		for(int k=0; k<l; k++){
			sum+=a[sent[k]];
		}
		prime();
/*		if(fl==1)
			cout<<"It is a prime word."<<endl;
		if(fl==0)
			cout<<"It is not a prime word."<<endl;
	}*/
		return 0;
}