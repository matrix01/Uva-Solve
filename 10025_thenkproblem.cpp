#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<map>
#include<cctype>
using namespace std;

map<long long, int> fib;
long long fibo[100];
int input[100];

void fibonacci(){
	fibo[0]=1;
	fibo[1]=2;
	fib[1]=0;
	fib[2]=1;
	for(int i=2; fibo[i-1]<(long long)2147483648; i++){
		fibo[i]=fibo[i-1]+fibo[i-2];
		fib[fibo[i]]=i;
	}
}
int main(){
	fibonacci();
	int t, n;
	cin>>t;
	while(t--){
		cin>>n;
		int max=0;
		for(int i=0; i<n; i++){
			scanf("%d", &input[i]);

			if(max<input[i])max=input[i];
		}
		getchar();
		char str[110];
		gets(str);
		char ans[110];
		memset(ans, ' ', sizeof(ans));
		ans[fib[max]+1]=0;
		int len=0;
		for(int i=0; i<n; i++){
			while(!isupper(str[len]))len++;

			ans[fib[input[i]]]=str[len];
			len++;
		}
		printf("%s\n", ans);
	}

	return 0;
}