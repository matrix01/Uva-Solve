/*
*******************************************
*	Problem type: easy
*	Status : Solved
*******************************************
*/

#include<iostream>
using namespace std;
int main(){
	int a[100][100], n, row, col;
	while(cin>>n){
		if(n==0) break;
		for(row=0; row<n; row++)
			for(col=0; col<n; col++)
				cin>>a[row][col];
		int x, y, z, e, f;
		e=f=0;
		for(row=0; row<n; row++){
			x=0;
			for(col=0; col<n; col++)
				x+=a[row][col];
			if(x%2!=0){
				y=row+1;
				e++;
			}
		}
		for(col=0; col<n; col++){
			x=0;
			for(row=0; row<n; row++)
				x+=a[row][col];
			if(x%2!=0){
				z=col+1;
				f++;
			}
		}
		if(e==0 && f==0)cout<<"OK"<<endl;
		else if(e==1 && f==1) cout<<"Change bit ("<<y<<","<<z<<")"<<endl;
		else cout<<"Corrupt"<<endl;
	}
	return 0;
}