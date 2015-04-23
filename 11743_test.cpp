#include<iostream>
#include<stdio.h>
#include<cstring>
#define fin (freopen("11743_in.txt", "r", stdin))
#define fout (freopen("11743_out.txt", "w", stdout))
using namespace std;
int main(){
	int credit[16], t, j;
	cin>>t;
	while(t--){
		for(j=0;j<16;j++)
			scanf("%1d", &credit[j]);
	
		int sum1=0;
		for(int i=1; i<=15; i+=2)
			sum1= sum1+credit[i];
		
		int sum2=0;
		for(int i=0; i<=14; i+=2)
			sum2=sum2 + (credit[i]*2)/10 + (credit[i]*2)%10;;
		
		int total=sum1+sum2;
		
		if(total%10==0) cout<<"Valid";
        else cout<<"Invalid";
		if(t>0) cout<<endl;
	}
	return 0;
}

