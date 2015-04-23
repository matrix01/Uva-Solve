#include<iostream>
#include<cstdio>
#include<set>
using namespace std;
int main(){
	int n, sq=1;
	while(cin>>n){
		int a[100005]={0};
		int flag=0;
		for(int i=1; i<=n; i++){
			cin>>a[i];
			if(a[i]<=a[i-1])
				flag=1;
		}
		int mark[20001]={0};
		if(flag==0)
		for(int i=1; i<=n; i++)
			for(int j=i; j<=n; j++){
				if(mark[a[i]+a[j]]!=0)
					flag=1;
					mark[a[i]+a[j]]=1;
			}
		if(!flag)
			printf("Case #%d: It is a B2-Sequence.\n\n", sq++);
		else
			printf("Case #%d: It is not a B2-Sequence.\n\n", sq++);
	}
	return 0;
}