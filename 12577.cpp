#include<iostream>
#include<cstring>
using namespace std;
int main(){
	int sq=1;
	char s1[100];
	while(cin>>s1){
		if(s1[0]=='*'&&s1[1]=='\0')
			break;
		if(!strcmp(s1,"Hajj"))
			cout<<"Case "<<sq++<<": "<<"Hajj-e-Akbar"<<endl;
		else
			cout<<"Case "<<sq++<<": "<<"Hajj-e-Asghar"<<endl;
	}

	return 0;
}