#include<iostream>
using namespace std;
int Big_Mod(int *a, int size, int b, int m){
	long long x=1;
	long long power=b;
	for(int i=0; i<size; i++){
		if(a[i]==0){
			x=x%m;
			power=power*power;
			power=power%m;
		}
		else if(a[i]==1){
			x=(x*power)%m;
			power=power*power;
			power=power%m;
		}
	}
	cout<<x<<endl;
	return 0;
}
int Convert_Binary(int b, int pownum, int m){
	int a[1000], i;
	i=0;
	while(pownum!=0){
		int rem=pownum%2;
		pownum=pownum/2;
		a[i++]=rem;
	}
	Big_Mod(a, i, b, m);
	return 0;
}
int main03(){
	int b, p, m;
	while(1){
		cin>>b>>p>>m;
		Convert_Binary(b, p, m);
	}
	return 0;
}