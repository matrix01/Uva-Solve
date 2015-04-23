/*
*	Status			: Accepted
*	Problem type	: Easy problem
*/

#include<iostream>
using namespace std;
int main(){
	int i, a, b, c, d, l, k;
	while(cin>>a>>b>>c>>d>>l){
		if(a==0&&b==0&&c==0&&d==0&&l==0) break;
		k=0;
		for(i=0; i<=l; i++){
			if((a*i*i+b*i+c)%d==0)
				k++;
		}
		cout<<k<<endl;
	}
	return 0;
}