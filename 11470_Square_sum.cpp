#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main(){
	int sqr[11][11], i ,j, n, k=1;
	while(cin>>n&&n!=0){
		for(i=0; i<n; i++)
			for(j=0; j<n; j++)
				cin>>sqr[i][j];
		int sum;
		printf("Case %d:", k++);
		for(i=0; i<n/2; i++){
			sum=0;
			sum+=sqr[i][i]+sqr[i][n-1-i]+sqr[n-1-i][i]+sqr[n-1-i][n-1-i];
			for(j=i+1; j<n-1-i; j++)
				sum+=sqr[i][j]+sqr[j][i]+sqr[n-1-j][n-1-i]+sqr[n-1-i][n-1-j];
			cout<<" "<<sum;
		}
		if(n%2!=0)cout<<" "<<sqr[n/2][n/2];
		cout<<endl;
	}
	return 0;
}