#include<iostream>
using namespace std;
int main(){
	int total, n;
	while(cin>>n){
		total=n;
		while(n/3){
			total+=n/3;
			n=(n%3)+(n/3);
		}
		if(n==2)
			cout<<(total+1)<<endl;
		else
			cout<<total<<endl;
	}
	return 0;
}