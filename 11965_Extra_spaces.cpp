#include<iostream>
#include<stdio.h>
#include<cstdlib>
#include<cstring>
#include<string>
#include<cmath>
#include<cctype>
#include<algorithm>
#include<vector>
#define fin (freopen("11956_in.txt","r",stdin))
#define fout (freopen("11956_out.txt","w",stdout))
#define N 1000005
using namespace std;
int main(){
	string s;
	int t, n, i, l, sq=1;
	scanf("%d%*c", &t);
	int temp=t;
	while(t--){
		scanf("%d%*c", &n);
		printf("Case %d:\n", sq++);
		while(n--){
			getline(cin, s);
			l=s.length();
			bool flag=true;
			for(i=0; i<l; i++){
				if(s[i]==' '){
					if(flag==true){
						cout<<s[i];
						flag=false;
					}
					else
						continue;
				}
				else{
					cout<<s[i];
					flag=true;
				}
			}
			cout<<endl;
		}
		if((sq-1)<temp) cout<<endl;
	}
	return 0;
}