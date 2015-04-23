#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main(){
	char s[1000005];
	int n, i, j, sq=1;
	while(cin>>s){
		printf("Case %d:\n", sq++);
		if(strcmp(s, "\n")==0)break;
		cin>>n;
		int c=0;
		for(int tc=1; tc<=n; tc++){
			cin>>i>>j;
			if(i>j){
				int t=i;
				i=j;
				j=t;
			}
			if(i==j){printf("Yes\n", tc);continue;}
			for(int k=i; k<j; k++){
				if(s[k]==s[k+1])
					c=1;
				else{
					c=0; 
					break;
				}
			}
			if(c==1)
				printf("Yes\n");
			else 
				printf("No\n");
		}
	}

	return 0;
}