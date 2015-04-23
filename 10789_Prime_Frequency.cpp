#include<iostream>
#include<stdio.h>
#include<cstring>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;
#define Max 100000
bool state[Max];
int freq[128];
void prime_sieve(){
	for(int i=2; i<Max; i++)
		state[i]=true;
	for(int i=2; i<Max; i++)
		for(int j=i*2; j<Max; j=j+i)
			state[j]=false;
}

int main(){
	prime_sieve();
	int t, l, sq=1;
	string str;
	 scanf("%d%*c", &t);
	 while(t--){
		 for(int i=0; i<128; i++) freq[i]=0;
		getline(cin, str);
		l=str.length();
		for(int i=0; i<l; i++){
			if(str[i]>='a'&&str[i]<='z')
				freq[str[i]]++;
			else if(str[i]>='A'&&str[i]<='Z')
				freq[str[i]]++;
			else if(str[i]>='0'&&str[i]<='9')
				freq[str[i]]++;
		}
		int count=0;
		cout<<"Case "<<sq++<<": ";
		for(int i=0; i<128; i++) 
			if(freq[i]!=0&&freq[i]>1)
				if(state[freq[i]]==true){
					printf("%c", i);
					count++;
				}
		if(count==0)
			cout<<"empty";
		cout<<endl;
	 }
	return 0;
}