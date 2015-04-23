/**********************************
* Accepted
* Adding and subtruct
************************************/

#include<iostream>
using namespace std;
int main(){
	int t, n, wall[100], sq=0;
	cin>>t;
	while(t--){
		int hj=0, lj=0;
		cin>>n;
		for(int i=0;i<n; i++) cin>>wall[i];
		for(int i=0; i<n-1; i++){
			if(wall[i]<wall[i+1]) hj++;
			else if(wall[i]>wall[i+1]) lj++;
			else continue;
		}
		cout<<"Case "<<++sq<<": "<<hj<<" "<<lj<<endl;
	}
	return 0;
}