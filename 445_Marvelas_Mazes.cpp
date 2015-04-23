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
	char c;
	int n=0;
	while(scanf("%c", &c)==1){
		if(c>='0'&&c<='9')
			n+=c-'0';
		else if((c>='A'&&c<='Z')||c=='*'||c=='b'){
			for(int i=0; i<n; i++){
				if(c=='b') cout<<" ";
				else cout<<c;
			}
			n=0;
		}
		else
			cout<<endl;

	}
	return 0;
}