#include<iostream>
using namespace std;
int main(){
	int a[5], i, k, n;
	while(cin>>n){
		if(n==0)break;
		while(n--){
			int count=0;
			for(i=0; i<5;i++){
				cin>>a[i];
				if(a[i]<=127){
					count++;
					k=i+1;
				}
			}
			if(count==1){
				if(k==1)
					cout<<'A'<<endl;
				else if(k==2)
					cout<<'B'<<endl;
				else if(k==3)
					cout<<'C'<<endl;
				else if(k==4)
					cout<<'D'<<endl;
				else if(k==5)
					cout<<'E'<<endl;
			}
			else
				cout<<'*'<<endl;
		}
	}
	return 0;
}