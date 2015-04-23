#include<iostream>
#include<cstring>
#include<string>
#include<algorithm>
#include <stdio.h>
#define fin (freopen("10474_in.txt","r",stdin))
#define fout (freopen("10474_out.txt","w",stdout))
using namespace std;
int main(){
	int t, n, c, i, sq=1;
	char field[120];
	cin>>t;
	while(t--){
		cin>>n>>field;
		c=0;
		for(i=0; i<n; ){
			if(field[i]=='#')
				i++;
			else{
				c++;
				i+=3;
			}
		}
		printf("Case %d: %d\n", sq++, c);
	}
	return 0;
}