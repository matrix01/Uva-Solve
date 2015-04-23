/****************************
*	Accepted
*	Its a bitwise operation
*	Check Wiki for details
******************************/

#include<iostream>
#define fin (freopen("10469_in.txt","r",stdin))
#define fout (freopen("10469_out.txt","w",stdout))
using namespace std;
int main(){
	unsigned int a, b;
//	fin;
//	fout;
	while(cin>>a>>b){
		cout<<(a^b)<<endl;
	}
	return 0;
}