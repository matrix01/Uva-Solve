#include<iostream>
#include<cmath>
using namespace std;
#define max 101
long long s2[max], s3[max], s4[max], i;
long long r2[max], r3[max], r4[max], n;
void pre_count_sqrt(){
	s2[0]=s3[0]=s4[0]=0;
	for(i=1; i<=100; i++){
		s2[i]=s2[i-1]+i*i;
		s3[i]=s3[i-1]+i*i*i;
		s4[i]=s4[i-1]+i*i*i*i;
		r2[i]=(i*(i+1)/2)*(i*(i+1)/2)-s2[i];
		r3[i]=(i*(i+1)/2)*(i*(i+1)/2)*(i*(i+1)/2)-s3[i];
		r4[i]=(i*(i+1)/2)*(i*(i+1)/2)*(i*(i+1)/2)*(i*(i+1)/2)-s4[i];
	}
}
int main(){
	pre_count_sqrt();
	while(cin>>n){
		cout<<s2[n]<<" "<<r2[n]<<" "<<s3[n]<<" "<<r3[n]<<" "<<s4[n]<<" "<<r4[n]<<endl;
	}
	return 0;
}