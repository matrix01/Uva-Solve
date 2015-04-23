#include<iostream>
#include<stdio.h>
#include<cstdlib>
#include<cstring>
#include<string>
#include<cmath>
#include<cctype>
#include<algorithm>
#define fin (freopen("11945_in.txt","r",stdin))
#define fout (freopen("11945_out.txt","w",stdout))
using namespace std;
int main(){
	double in, sum, i, t, avg;
	int sq=1;
	cin>>t;
	while(t--){
		sum=0;
		for(i=0; i<12; i++){
			cin>>in;
			sum+=in;
		}
		avg=sum/12.00;
		if(avg>999.0){
			int x=avg/1000;
			printf("%d $%d,",sq++, x);
			double y=fmod(avg, 1000.0);
			printf("%.2lf\n", y);
		}
		else
			printf("%d $%.2lf\n",sq++, avg);
	}
	return 0;
}