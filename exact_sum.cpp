#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
	long PriceList[100000], PM, NB, p1, p2, diff=2000000;
	while(cin>>NB){
		for(int i=0; i<NB; i++)
			cin>>PriceList[i];
		cin>>PM;
		for(long i=0; i<NB; i++){
			for(long j=0; j<NB; j++){
				if((PriceList[i]+PriceList[j])==PM && i!=j){
					if(PriceList[i]>PriceList[j]){
						if((PriceList[i]-PriceList[j])<diff){
							p1=PriceList[j];
							p2=PriceList[i];
							diff=PriceList[i]-PriceList[j];
						}
					}
					else{
						if(PriceList[j]-PriceList[i]<diff){
							p1=PriceList[i];
							p2=PriceList[j];
							diff=PriceList[j]-PriceList[i];
						}
					}
				}
			}
		}
		cout << "Peter should buy books whose prices are " << p1 << " and " << p2 << ".\n" << endl;
	}
	return 0;
}