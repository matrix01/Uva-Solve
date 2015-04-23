#include<iostream>
#include<cstdio>
using namespace std;
#define max 4000001
long long G[max]={0};
int gcd ( int a, int b ){
    if( b == 0 ) return a; 
	return gcd ( b, a % b );
}
void pre_gcd(){
	for(int i=1; i<max; i++)
		for(int j=i+1; j<max; j++)
			G[i]=G[i-1]+gcd(i, j);
}
int main(){
	pre_gcd();
	int n;
	while(cin>>n){
		if(n==0)break;
		cout<<G[n]<<endl;
	}
	return 0;
}