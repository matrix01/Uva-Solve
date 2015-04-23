/*
* Problem Name : Big Mod
* Status : Trying
* By Milan
* Date : 11.04.2012
*/
#include<stdio.h>
//using namespace std;
int Big_Mod(int *a, int size, int b, int m){
	int x=1;
	int power=b;
	int i;
	for(i=0; i<size; i++){
		printf("Increment: %d\n", a[i]);
		//cout<<"Increment: "<<a[i]<<endl;
		if(a[i]==0){
			x=x%m;
			//cout<<"X is: "<<x<<endl;
			power=power*power;
			power=power%m;
			//cout<<"Power: "<<power<<endl;
		}
		else if(a[i]==1){
			x=(x*power)%m;
			//cout<<"X : "<<x<<endl;
			power=power*power;
			power=power%m;
			//cout<<"Power: "<<power<<endl;
		}
	}
	//cout<<"Result: "<<x<<endl;
	printf("Result: %d\n", &x);
	return 0;
}
void Convert_Binary(int b, int pownum, int m){
	int a[1000];
	int i;
	i=0;
	while(pownum!=0){
		int rem=pownum%2;
		pownum=pownum/2;
		a[i++]=rem;
	}
	Big_Mod(a, i, b, m);
/*	cout<<"Binary: ";
	for(int j=i-1; j>=0; j--){
		cout<<a[j];
	}
	cout<<endl; */
}
int main(){
	int b, p, m;
	while(1){
		//cin>>b>>p>>m;
		scanf("%d%d%d", &b, &p, &m);
		Convert_Binary(b, p, m);
	}
	return 0;
}
