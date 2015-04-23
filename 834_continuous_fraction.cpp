#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	int res, nume, deno, rem, i;
	while(cin>>nume>>deno){
		printf("[%d;", nume/deno);
		rem=nume%deno;
		nume=deno;
		deno=rem;
		bool flag=false;
		while(nume!=1){
			if(flag==true)
				cout<<",";
			flag=true;
			rem=nume%deno;
			cout<<nume/deno;
			nume=deno;
			deno=rem;
		}
		cout<<"]"<<endl;
	}
	return 0;
}