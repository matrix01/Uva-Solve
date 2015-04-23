#include<iostream>
#include<cmath>
#define fin (freopen("10591_in.txt", "r", stdin))
#define fout (freopen("10591_out.txt", "w", stdout))
using namespace std;
bool num[2000];
long sum(long n){
	long sum=0;
	while(n>0){
		long d=n%10;
		sum+=d*d;
		n=n/10;
	}
	return sum;
}
int main(){
	long t, n, casen=1, temp;
	cin>>t;
	while(t--){
		for(long i=0; i<2000; i++) num[i]=false;
		cin>>n;
		temp=n;
		if(n>=2000) n=sum(n); 
		while(!num[n]&&(n^1)){
			num[n]=true;
			n=sum(n);
		}
		if(n^1)
			cout<<"Case #"<<casen++<<": "<<temp<<" is an Unhappy number."<<endl;
		else cout<<"Case #"<<casen++<<": "<<temp<<" is a Happy number."<<endl;
	}
	return 0;
}