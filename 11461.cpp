#include<iostream>
#include<cmath>
using namespace std;
int main(){
	long double a, b, i;
	while(cin>>a>>b){
		int count=0;
		if(a==0 && b==0) break;
		for( i=a; i<=b; i++){
			if(sqrt(i)==ceil(sqrt(i))||sqrt(i)==floor(sqrt(i)))
				count++;
		}
		cout<<count<<endl;
	}
	return 0;
}