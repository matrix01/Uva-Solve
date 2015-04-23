#include<iostream>
using namespace std;
int main(){
	int a[15], t, i, j, k, fl=0;
	cin>>t;
	cout<<"Lumberjacks:"<<endl;
	while(t--){
		fl=0;
		for(i=0; i<10; i++)
			cin>>a[i];

		for(j=1; j<10; j++){
			if(a[j-1]<=a[j]){
				if(j==9){
					cout<<"Ordered"<<endl;
					fl=1;
				}
			}
			else
				break;
		}
		if(fl==0)
			for(j=1; j<10; j++){
				if(a[j-1]>=a[j]){
					if(j==9){
						cout<<"Ordered"<<endl;
						fl=1;
					}
				}
				else
					break;
			}
			if(fl==0){
				cout<<"Unordered"<<endl;
			}
	}
	return 0;
}