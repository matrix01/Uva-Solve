/*
* Easy problem
* status: Accepted
*
*/
#include<iostream>
#include<string>
using namespace std;
int main(){
	long long cur_money=0, don_money;
	string don;
	int t;
	cin>>t;
	while(t--){
		cin>>don;
		if(don=="donate"){
			cin>>don_money;
			cur_money+=don_money;
		}
		else
			cout<<cur_money<<endl;
	}
	return 0;
}