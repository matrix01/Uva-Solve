#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>
#include<string>
using namespace std;
int main(){
	char num1[210], num2[210], temp[210];
	int sum[210];
	int i, t, len, l_num1, l_num2;
	cin>>t;
	while(t--){
		//num1
		for(i=0; i<210; i++)num1[i]=num2[i]=48;
		cin>>temp;
		len=strlen(temp);
		while(temp[len-1]=='0')len--;
		l_num1=0;
		for(i=0; i<len; i++) num1[l_num1++]=temp[i];
		//num1[l_num1]='\0';
		//num2
		cin>>temp;
		len=strlen(temp);
		while(temp[len-1]=='0')len--;
		l_num2=0;
		for(i=0; i<len; i++) num2[l_num2++]=temp[i];
		//num2[l_num2]='\0';
		//max len
		len=l_num1>l_num2 ? l_num1:l_num2;
		//cout<<len<<endl;
		//Addition
		int rem=0, l=0;
		for(i=0; i<len; i++){
			rem=(num1[i]-48)+(num2[i]-48)+rem;
			//cout<<rem<<endl;
			sum[l++]=rem%10;
			//cout<<rem%10;
			rem/=10;
		}
		//cout<<endl;
		while(rem!=0){
			sum[l++]=rem%10;
			rem/=10;
		}
		i=0;
		while(sum[i]==0)i++;

		while(i<l)cout<<sum[i++];
		cout<<endl;

	}
	return 0;
}