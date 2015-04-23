#include<iostream>
using namespace std;
int main(){
	int a, c, count, prev;
	while(cin>>a>>c){
		if(a==0&&c==0)break;
		prev=a;
		count=0; int x;
		while(c--){
			cin>>x;
			if(x<prev)
				count+=prev-x;
			prev=x;
		}
		cout<<count<<endl;
	}
	return 0;
}