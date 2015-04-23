#include<iostream>
using namespace std;
struct google{
	char wnam[110];
	int rank;
};
int main(){
	google g[12];
	int t;
	cin>>t;
	for(int i=1; i<=t; i++){
		int max=0;
		for(int j=0; j<10; j++){
			cin>>g[j].wnam;
			cin>>g[j].rank;
			if(max<g[j].rank) max=g[j].rank;
		}
		cout<<"Case #"<<i<<":"<<endl;
		for(int k=0; k<10; k++)
			if(g[k].rank==max)
				cout<<g[k].wnam<<endl;
	}
	return 0;
}