#include<iostream>
using namespace std;
long long triangle[1000001], i;
int main(){
	triangle[3]=0;
	for(i=4; i<1000001; i++)
		if(i&1)
			triangle[i]=(i-1)*(i-3)/4+triangle[i-1];
		else
			triangle[i]=(i-2)*(i-2)/4+triangle[i-1];
	long long n;
	while(cin>>n&&n>2){
		cout<<triangle[n]<<endl;
	}
	return 0;
}