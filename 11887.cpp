#include<iostream>
using namespace std;
int main(){
	int rem, ext, total, t, e, f,c, n;
	cin>>t;
	while(t--){
		total=0;
		cin>>e>>f>>c;
		n=e+f;
		while(n>=c){
			rem=n%c;
			ext=n/c;
			total+=ext;
			n=ext+rem;
		}
			cout<<total<<endl;
	}
	return 0;
}