#include<iostream>
#include<stdio.h>
#include<cstdlib>
#include<cstring>
#include<string>
#include<cmath>
#include<cctype>
#include<algorithm>
#define fin (freopen("10070_in.txt","r",stdin))
#define fout (freopen("10070_out.txt","w",stdout))
using namespace std;
int main(){
	char input[30];
	int t, n, i, j, val[110];
	cin>>t;
	while(t--){
		int ans=0;
		scanf("%d", &n);
		for(i=1; i<=n; i++){
			scanf("%s", input);
			if(strcmp(input, "LEFT")==0) {
				ans-=1;
				val[i]=-1;
			}
			else if(strcmp(input, "RIGHT")==0) {
				ans+=1;
				val[i]=1;
			}
			else{
				scanf("%s%d", input, &j);
				ans+=val[j];
				val[i]=val[j];
			}
		}
		cout<<ans<<endl;
	}
	
	return 0;
}