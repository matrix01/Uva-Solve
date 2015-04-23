#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
int main(){
	int t, n, sq=1;
	cin >> t;
	string s;
	while (t--){
		cin >> n;
		cin >> s;
		int b = 0, w = 0, t=0, a=0;
		for (int i = 0; i < n; i++){
			if (s[i] == 'W') w++;
			else if (s[i] == 'B') b++;
			else if (s[i] == 'T') t++;
			else a++;
		}
		if (b>0 && w == 0 && t == 0) printf("Case %d: BANGLAWASH\n", sq++);
		else if (w > 0 && b == 0 && t == 0) printf("Case %d: WHITEWASH\n", sq++);
		else if (b > w) printf("Case %d: BANGLADESH %d - %d\n", sq++, b, w);
		else if (w > b) printf("Case %d: WWW %d - %d\n", sq++, w, b);
		else if(a==n) printf("Case %d: ABANDONED\n", sq++);
		else printf("Case %d: DRAW %d %d\n", sq++, b, t);
	}
	return 0;
}