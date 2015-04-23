/*
*	You have to go and come back.
*	If the distance between last station more then 2 times then false
*/

#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n, a[2000];
	bool flag=false;
	while(cin>>n){
		if(n==0) break;
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		sort(a, a+n);
		for(int i=1; i<n-1; i++){
			if(a[i]-a[i-1]<=200) flag=true;
			else{
				flag=false;
				break;
			}
		}
		if ( 2 * (1422 - a [n - 1]) > 200 ) flag = false;
		if(flag==true)
			cout<<"POSSIBLE"<<endl;
		else
			cout<<"IMPOSSIBLE"<<endl;
	}
	return 0;
}