/*
*status: Ac
*
*/

#include<iostream>
#include<cmath>
using namespace std;
int main(){
	long long int n=0, t, sq=1;
	double tk, tax=0.0;
	cin>>t;
	while(t--){
		cin>>tk;
		if(tk<=180000.0) 
			tax=0.0;
		else if(tk>180000.0&&tk<=480000.0)
			tax=(tk-180000.0)*0.1;

		else if(tk>480000.0&&tk<=880000.0)
			tax=((tk-480000.0)*0.15)+30000.0;

		else if(tk>880000.0&&tk<=1180000.0)
          tax=((tk-880000.0)*0.2)+90000.0;

		else if(tk>1180000)
			tax=((tk-1180000.0)*0.25)+150000.0;
		
		if(tax>0&&tax<2000)
			tax=2000.0;
		
		n=ceil(tax);
		if(n<tax)
			n++;
		cout<<"Case "<<sq++<<": "<<n<<endl;
	}
	return 0;
}