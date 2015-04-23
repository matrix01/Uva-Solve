#include<iostream>
#include<algorithm>
using namespace std;
int main (){
    int t;
    cin>>t;
    int c = 1;
    while (t--){
        double sum=0;
		int exm[4], clst[3];
		for(int i=0; i<4; i++){
			cin>>exm[i];
			sum+=exm[i];
		}
        for(int i=0; i<3; i++)
			cin>>clst[i];
		sort(clst+0, clst+3);
		sum+=(clst[2]+clst[1])/2.00;
		cout<<"Case "<<c++<<": ";
		if (sum>=90) cout<<"A"<<endl;
		else if (sum>=80) cout<<"B"<<endl;
		else if ( sum >=70) cout<<"C"<<endl;
		else if ( sum >= 60 ) cout<<"D"<<endl;
		else cout<<"F"<<endl;
    }
    return 0;
}  
