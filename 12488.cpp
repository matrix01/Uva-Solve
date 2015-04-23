/*
* Status : Accepted
*
/
*/

#include<iostream>
using namespace std;
int main(){
	int t, a[30], a2[30], pos, count;
	while(cin>>t){
	
		for(int i=0; i<t; i++)
			cin>>a[i];
		for(int i=0; i<t; i++)
			cin>>a2[i];

		count=0;
		
	for(int i=0; i<t; i++){
		for(int j=i; j<t; j++)
			if(a2[i]==a[j]){
				pos=j;
				break;
			}

		for(int j=pos; j>i; j--){
			a[j]=a[j-1];
			count++;
		}
	}
		cout<<count<<endl;
	}
	return 0;
}