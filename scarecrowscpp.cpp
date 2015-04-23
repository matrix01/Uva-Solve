#include<iostream>
#include<string.h>
using namespace std;
int main(){
	int i, len, count=0, t;
	char field;
	cin>>t;
	int scarecew=0;
	int dotcount=0, hashcount=0;
	int n;
	while(t--){
		cin>>n;
		int r=n%3;
		for(i=0; i<n; i++){
			cin>>field;
			if(field=='.')
				dotcount++;
			else if(field=='#')
				hashcount++;
			count++;
			if(count==3){
				if(dotcount>0){
					scarecew++;
					dotcount=0;
					hashcount=0;
					count=0;
				}
			}
		}
		cout<<scarecew<<endl;
		scarecew=0;
	}
	return 0;
}