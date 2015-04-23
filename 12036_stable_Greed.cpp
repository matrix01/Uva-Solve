#include<iostream>
#include<stdio.h>
#include<cstdlib>
#include<cstring>
#include<string>
#include<cmath>
#include<cctype>
#include<algorithm>
#define fin (freopen("12036_in.txt","r",stdin))
#define fout (freopen("12036_out.txt","w",stdout))
using namespace std;
int main(){
	int in[110], t, n, i, j, index, sq=1;
	cin>>t;
	while(t--){
		cin>>n;
		memset(in, 0, sizeof(in));
		for(i=0; i<n; i++)
			for(j=0; j<n; j++){
				cin>>index;
				in[index]++;
			}
			bool flag=true;
			for(i=0; i<101; i++)
				if(in[i]>n)
					flag=false;
			if(flag==false)
				printf("Case %d: no\n", sq++);
			else
				printf("Case %d: yes\n", sq++);
	}
	return 0;
}