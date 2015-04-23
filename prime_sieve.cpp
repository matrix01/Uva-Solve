#include<iostream>
#include<cmath>
#include<cstring>
#define Max 2000000
using namespace std;
char state[Max];
long long prime[100000];
char stat[10000000]; 
bool isprime ( int N )
{
    if ( N == 0 || N == 1 ) return false;
    if ( N % 2 == 0 ) return false;
    
    int i;
    int sqrtn = sqrt ( N );
    for ( i = 3; i <= sqrtn; i += 2 )
    {
        if ( N % i == 0 ) return false;
    }
    
    return true;
}
int main(){
	long long low, high;
	cin>>low>>high;
	for(int i=low; i<high; i++){
		if(isprime(i)==true)
			cout<<i<<endl;
	}
	return 0;
}