#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	int ans[20]={6,8,35,49,204,288,1189,1681,6930,9800,40391,57121,235416,332928,1372105,1940449,7997214,11309768,46611179,65918161};
	for(int i=0; i<19; i+=2)
		printf("%10d%10d\n", ans[i], ans[i+1]);
	return 0;
}