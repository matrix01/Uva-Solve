#include<iostream>
using namespace std;
int main(){
	int t, a, b, ch;
	while(1){
		cin>>a>>b;
		if(a==-1 && b==-1)
			break;
		if(a>b){
			t=a;
			a=b;
			b=t;
		}
		ch=b-a;
		if(ch>50){
			int b1=100-b;
			int ch1=b1+a;
			cout<<ch1<<endl;
		}
		else
			cout<<ch<<endl;
	}
	return 0;
}