#include<iostream>
#include<stdio.h>
#include<cstdlib>
#include<cstring>
#include<string>
#include<cmath>
#include<cctype>
#include<algorithm>
#define fin (freopen("10474_in.txt","r",stdin))
#define fout (freopen("10474_out.txt","w",stdout))
using namespace std;
int main(){
	int k;
	bool newl=false;
	while(cin>>k&&k!=0){
		if(newl) cout<<endl;
		newl=true;
		int x[13];
		for(int i=0; i<k; i++)
			cin>>x[i];
		int a, b, c, d, e, f;
		for(a=0; k-a>5; a++)
			for(b=a+1; k-b>4; b++)
				for(c=b+1; k-c>3; c++)
					for(d=c+1; k-d>2; d++)
						for(e=d+1; k-e>1; e++)
							for(f=e+1; k-f>0; f++)
								printf("%d %d %d %d %d %d\n", x[a], x[b], x[c], x[d], x[e], x[f]);
	}
	return 0;
}