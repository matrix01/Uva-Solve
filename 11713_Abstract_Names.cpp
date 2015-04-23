#include<iostream>
#include<stdio.h>
#include<string>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
	string nam1, nam2;
	int n, l1, l2, ch;
	scanf("%d%*c", &n);
	while(n--){
		getline(cin, nam1);
		getline(cin, nam2);
		l1=nam1.length();
		l2=nam2.length();
		if(l1!=l2)
			cout<<"No"<<endl;
		else{
			ch=0;
			for(int i=0; i<l1; i++){
				if(nam1[i]==nam2[i])
					ch++;
				else if(nam1[i]=='a'||nam1[i]=='e'||nam1[i]=='i'||nam1[i]=='o'||nam1[i]=='u')
					ch++;
				else
					ch=100;
			}
			if(ch>=100) cout<<"No"<<endl;
			else cout<<"Yes"<<endl;
		}
	}
	return 0;
}