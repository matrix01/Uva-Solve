#include<iostream>
#include<algorithm>
#include<cmath>
#define fin (freopen("11858_in.txt", "r", stdin))
#define MAX 1000002
long int std[MAX];
using namespace std;
int main(){
	long long int j, n, i,count=0;
	
//	fin;
	while(cin>>n){
		for(i=0; i<n; i++)
			cin>>std[i];
		bool flag=true;
		for(i=0; i<n-1 && flag==true; i++){
			flag=false;
			for(j=0; j<n-i-1; j++){
				if(std[j]>std[j+1]) {
					//cout<<std[j]<<" "<<std[j+1]<<endl;
					swap(std[j], std[j+1]);
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
