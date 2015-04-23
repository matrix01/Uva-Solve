#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	int r, n, kase=1, ans;
	while(cin>>r>>n){
		if(r==0&& n==0)break;
		ans=(r-1)/n;
		if(ans>26)
			printf("Case %d: impossible\n", kase++);
		else
			printf("Case %d: %d\n", kase++, ans);
	}
	return 0;
}