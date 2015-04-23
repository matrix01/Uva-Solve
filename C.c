#include<stdio.h>
//#include<iostream>
//using namespace std;
int main(){
	int n, t, sq=1, i;
	double sum=0;
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		sum=1.0;
		for(i=2; i<=n; i++){	
			sum+=1.0/i;
		//cout<<sum<<endl;
		}
		//cout.precision(11);
		//cout<<"Case "<<sq++<<": "<<sum<<endl;
		printf("%.9f\n", sum);
	}
	return 0;
}
