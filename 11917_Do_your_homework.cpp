#include<iostream>
#include<stdio.h>
#include<cstring>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;
struct sub{
	char name[1000];
	int rday;
};
int main(){
	sub s[1000];
	int i, t, ns, cday, temp=0;
	char subj[1000];
	cin>>t;
	for(i=1; i<=t; i++){
		cin>>ns;
		for(int j=0; j<ns; j++)
			cin>>s[j].name>>s[j].rday;
		bool flag=false;
		int d;
		cin>>d>>subj;
		for(int j=0; j<ns; j++){
			if(strcmp(s[j].name, subj)==0){
				temp=s[j].rday;
				flag=true;
				break;
			}
		}
		printf("Case %d: ", i);
		if(temp<=d && flag==true) cout<<"Yesss"<<endl;
		else if(temp<=d+5&& flag==true) cout<<"Late"<<endl;
		else cout<<"Do your own homework!"<<endl;
	}
	return 0;
}