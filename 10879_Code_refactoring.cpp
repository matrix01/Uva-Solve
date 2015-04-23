#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	int a, b, t, sq=1, count;
	cin>>t;
	while(t--){
		cin>>a;
		printf("Case #%d: %d", sq++, a);
		int sqt=(int)sqrt(a);
		count=0;
		for(int b=2; b<sqt+1; b++){
			if(a%b==0){
				printf(" = %d * %d", b, a/b);
				count++;
			}
			if(count==2){ 
				printf("\n"); 
				break;
			}
		}
	}
	

	return 0;
}