#include<iostream>
#include<stdio.h>
#include<cstring>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
	string s, s1;
	int i, l, l1, t, sq=1;
	scanf("%d%*c", &t);
	while(t--){
		getline(cin, s);
		getline(cin, s1);
		l=s.length();
		l1=s1.length();
		int sum=0, sum1=0;
		for(i=0; i<l; i++) 
			if(s[i]!=' ')
				sum+=s[i];
		for(i=0; i<l1; i++) 
			if(s1[i]!=' ')
				sum1+=s1[i];
		if(sum!=sum1)
			cout<<"Case "<<sq++<<": Wrong Answer"<<endl;
		else if((sum==sum1)&&(l==l1))
			cout<<"Case "<<sq++<<": Yes"<<endl;
		else
			cout<<"Case "<<sq++<<": Output Format Error"<<endl;
	}
	return 0;
}