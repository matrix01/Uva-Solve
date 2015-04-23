#include<iostream>
using namespace std;
int min(int a, int b){ 
	return (a<b)?a:b;
}
int generator(long long int s){
	if(s==0) return 0;
	else if(s==1) return 1;
	else if(s&1) return 1+min(generator(s+1),generator(s-1));
	else return 1+generator(s/2);
}
int main(){
	long long int s;
	while(cin>>s){
		cout<<generator(s)<<endl;
	}
	return 0;
}