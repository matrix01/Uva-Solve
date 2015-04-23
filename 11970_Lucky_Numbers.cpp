#include<iostream>
#include<cmath>
#include<algorithm>
#define fin (freopen("11970_in.txt", "r", stdin))
#define fout (freopen("11970_out.txt", "w", stdout))
using namespace std;
int n, num[10000];
int main(){
	int i, t, sq=1;
	cin>>t;
	int j=0;
	while(t--){
		for(i=0; i<10000; i++) num[i]=0;
		cin>>n;
		int len=sqrt(1000000000);
		for(i=1; i<=len; i++){
			int x=n-i*i;
			if(x%i==0 && x>0) num[j++]=x;
		}
		sort(num, num+j);
		cout<<"Case "<<sq++<<": ";
		for(i=0; i<j; i++) {
			cout<<num[i];
			if(i<j-1) cout<<" ";
		}
		cout<<endl;
		j=0;
	}
	return 0;
}