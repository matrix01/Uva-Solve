#include<iostream>
#include<algorithm>
#include<cmath>
#define fin (freopen("11858_in.txt", "r", stdin))
using namespace std;
long int st[1000002];
int main01(){
	long long int j, n, i,count=0;
	while(cin>>n){
		for(i=0; i<n; i++)
			cin>>st[i];
		bool flag=true;
		for(i=0; i<n-1 && flag==true; i++){
			flag=false;
			for(j=0; j<n-i-1; j++){
				if(st[j]>st[j+1]) {
					swap(st[j], st[j+1]);
					count++;
					flag=true;
				}
			}
		}
		cout<<count<<endl;
		count=0;
	}
	return 0;
}