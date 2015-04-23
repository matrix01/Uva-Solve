#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main014(){
	int t, len;
	char freq[128];
	char s[10000];
	while(1){
		for(int l=0; l<128; l++) freq[l]=0;
		cin>>t;
		for(int k=0; k<t; k++){
			cin>>s;
			cout<<s<<endl;
			len=strlen(s);
			cout<<len<<endl;
			for(int i=0; i<len; i++){
				cout<<s[i]<<endl;
				if(s[i]>=65 && s[i]<=91){
					freq[s[i]]++;
				}
				else if(s[i]>=97&&s[i]<=122)
					freq[s[i]-32]++;
			}
		}
		
		for(int i=0; i<128; i++){
			if(freq[i]!=0){
				char ch=freq[i];
				//cout<<ch<<" "<<freq[i]<<endl;
			}
		}
	}
	return 0;
}