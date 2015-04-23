#include<iostream>
using namespace std;
int main(){
	int n;
	while(cin>>n && n){
		if(n%2||n<4){
			cout<<"Impossible"<<endl;
			continue;
		}
			
		int m=(n*3)/2;
		cout<<m<<endl;
			
		 for(int i=1;i<n;i++)
        {
            cout<<i<<" "<<i+1<<endl;
            if(i<=n/2)
                cout<<i<<" "<<n/2+i<<endl;
        }
        cout<<n<<" 1"<<endl;
	}
	return 0;
}