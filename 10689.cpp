#include<iostream>
using namespace std;
int fibonacci(int n){
	if(n==0)
		return 0;
	if(n==1)
		return 1;
	else
		return(fibonacci(n-1)+fibonacci(n-2));
}
int main06(){
	int n, fibo, m;
	while(1){
		cin>>n>>m;
		fibo=fibonacci(n);
		if(m==1){fibo=fibo%10;}
		if(m==2){fibo=fibo%100;}
		if(m==3){fibo=fibo%1000;}
		if(m==4){fibo=fibo%10000;}
		cout<<fibo<<endl;
	}
	return 0;
}