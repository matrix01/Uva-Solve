#include<iostream>
#define min(a, b) ((a<b)? a:b)
using namespace std;
int main(){
	long int n, a, b, c, x, y, z, ugly[1502];
	a=b=c=n=ugly[1]=1;
	 while(n!=1500){
        x=2*ugly[a];
        y=3*ugly[b];
        z=5*ugly[c];
        ugly[++n]=min(x,min(y,z));
        if(ugly[n]==x) a++;
        if(ugly[n]==y) b++;
        if(ugly[n]==z) c++;
    }

	cout<<"The 1500'th ugly number is "<<ugly[1500]<<"."<<endl;
	return 0;
}