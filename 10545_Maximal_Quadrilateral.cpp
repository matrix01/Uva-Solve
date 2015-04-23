#include<iostream>
#include<cmath>
#include<stdio.h>
using namespace std;
int main(){
	int t, sq=1;
	double P, A, B, C, D;
	cin>>t;
	while(t--){
		cin>>P>>A>>B;
		if(2*A>=P||2*B>=P) cout<<"Case "<<sq++<<": Eta Shombhob Na."<<endl;
		else{
			C=P/2.00-A;
			D=P/2.00-B;
			double S=sqrt(A*B*C*D);
			double r=2*S/P;
			printf("Case %d: %.6lf\n",sq++, r);
		}
	}

	return 0;
}