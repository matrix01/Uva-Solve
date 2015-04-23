#include<iostream>
#include<stdio.h>
#include<cstring>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
	int N, temp;
	while(cin>>N && N!=0){
		temp=N;
		int count=0;
		bool flag=false;
		if(floor(sqrt(temp))==sqrt(temp))
			count--;
		for(int i=2; i<=sqrt(temp)+1; i++){
			flag=false;
			while(temp%i==0){
				temp=temp/i;
				flag=true;
			}
			if(flag==true)
				count++;
		}
		cout<<N<<" : "<<count+1<<endl;
	}
	return 0;
}