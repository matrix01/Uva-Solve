#include<iostream>
#include<cstring>
using namespace std;
int main(){
	char num[1005];
	cin>>num;
	while(num[0]!='0'||strlen(num)>1){
		int mod=0;
		for(int i=0; num[i]; i++){
			mod=((mod*10)+(num[i]-'0'))%11;
		}		
		if(mod==0) cout<<num<<" is a multiple of 11."<<endl;
		else cout<<num<<" is not a multiple of 11."<<endl;
		cin>>num;
	}
	return 0;
}