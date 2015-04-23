#include<iostream>
#include<cstdio>
#include<string>
#include<cmath>
using namespace std;
int main(){
	int t, n, i, sq=1;
	int duration;
	cin>>t;
	while(t--){
		cin>>n;
		int mile=0, juice=0;
		while(n--){
			cin>>duration;
			mile+=((duration/30)+1)*10;
			juice+=((duration/60)+1)*15;
		}
		if(mile<juice) printf("Case %d: Mile %d\n", sq++, mile);
		else if(juice<mile) printf("Case %d: Juice %d\n", sq++, juice);
		else printf("Case %d: Mile Juice %d\n", sq++, mile);
	}

	return 0;
}