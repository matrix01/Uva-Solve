#include<iostream>
using namespace std;
#define N 1000011
long long int res[N];
int main(){
	int i, j;
	for(i=0; i<=N; i++) res[i]=0;
	res[6]=1;
	for(i=1; i<=3; i++)
		for(j=6; j<=N; j++)
			res[j+i]+=res[j];
	int ans, sq=0;
	while(cin>>ans){
		if(ans==0) break;
		cout<<"Case "<<++sq<<": "<<res[ans]<<endl;
	}
	return 0;
}