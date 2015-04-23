#include<iostream>
using namespace std;
int main(){
	int strt, t, a, b, diff, count; 
	cin>>t;
	while(t--){
		cin>>a>>b;
		diff=b-a;
		strt=1; 
		count=0;
		bool flag=false;
		while(diff>0){
			diff=diff-strt;
			count++;
			if(flag)strt++;
			flag=!flag;
		}
		cout<<count<<endl;
	}

	return 0;
}