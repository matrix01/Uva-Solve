#include<iostream>
#include<algorithm>
#include <stdio.h>
#define fin (freopen("10474_in.txt","r",stdin))
#define fout (freopen("10474_out.txt","w",stdout))
using namespace std;
int main()
{
	long a, n, k, i, j, sq=0;
	long count, max, temp;
	
	while (scanf("%ld %ld", &n, &j) !=EOF){		
		if(n<0 && j<0) break;
		temp=n;
		count=0;
			while(n<=j){
				count++;
					if(n==1)
						break;
					if(n%2!=0)
						n=(3*n)+1;
					else
						n=n/2;				
			}
			 cout<<"Case "<<++sq<<": A = "<<temp<<", limit = "<<j<<", number of terms = "<<count<<endl;
	}
	return 0;
}
