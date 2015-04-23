#include<iostream>
#include<stdio.h>
#include<cstring>
#define fin (freopen("11827_in.txt", "r", stdin))
using namespace std;
int gcd ( int a, int b ){
    if( b == 0 ) return a; 
	return gcd ( b, a % b );
}
int main(){
	int num[105];
	char numlist[100000];
	int t, i, j;
	scanf("%d%*c", &t);
	while(t--){
		gets(numlist);
		i = 0;
        j = 0;
		while(numlist[i])
        {
            num[j]=0;
            while(numlist[i]&&numlist[i]!=' ')
                num[j]=num[j]*10 + numlist[i++]-'0';
            while(numlist[i]==' ')
                i++;
            j++;
        }
		int max=0;
		for(int l=0; l<j; l++){
			for(int m=l+1; m<j; m++){
				int t=gcd(num[l], num[m]);
				if(t>max) max=t;
			}
		}
		cout<<max<<endl;
		i=0;
	}

	return 0;
}