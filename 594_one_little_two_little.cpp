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
#define swap(a, b) a=a^b, b=a^b, a=a^b 
int main(){
	int num, rev;
	while(scanf("%d", &num)!=EOF){
		rev=num;
		char *bits= (char*) &rev;
		cout<<rev<<endl;
		swap(bits[0], bits[3]), swap(bits[1], bits[2]);
		printf("%d converts to %d\n", num, rev);
	}
	return 0;
}