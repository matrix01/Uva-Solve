#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;
int main(){
	char str[100];
	int k, t, tc, i, a[10000], j;
	for(k=0; k<10000; k++)
		a[k]=0;
	cin>>t;
	while(t--){
		cin>>tc;
		for(i=1; i<=tc; i++){
			gets(str);
		/*	if(!strcmp(str,"LEFT")){
				a[i]--;
			}
			if(!strcmp(str,"RIGHT")){
				a[i]++;
			}
			else {
				sscanf(str, "%*s %*s %d", &j);
				a[i]=a[j]+a[j];
			}*/
		}
		int sum=0;
		for(k=0; k<=tc; k++)
			sum+=a[k];
		cout<<sum<<endl;
		}
	return 0;
}