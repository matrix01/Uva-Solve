#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int ans[30];
void cary(){
	int i, cary=0;
	for(i=0; i<30; i++){
		ans[i]+=cary;
		cary=ans[i]/10;
		ans[i]%=10;
	}
}
int main(){
	int n, d, i, j;
	while(cin>>n>>d){
		if(!n||!d)break;
		memset(ans, 0, sizeof(ans));
		ans[0]=1;
		for(i=0; i<d; i++){
			for(j=0; j<30; j++){
				ans[j]*=n;
			}
			cary();
		}
		bool flag=true;
		for(i=30; i>=0;i--){
			if(flag==true &&ans[i]==0)continue;
			flag=false;
			printf("%d", ans[i]);
		}
		cout<<endl;
	}

	return 0;
}