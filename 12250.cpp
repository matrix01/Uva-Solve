#include<iostream>
#include<cstring>
using namespace std;
int main(){
	char s[16];
	int sq=1;
	while(cin>>s){
		if(s[0]=='#'&&s[1]=='\0') break;
		else if(!strcmp(s, "HELLO"))
			cout<<"Case "<<sq++<<": "<<"ENGLISH"<<endl;
		else if(!strcmp(s, "HOLA"))
			cout<<"Case "<<sq++<<": "<<"SPANISH"<<endl;
		else if(!strcmp(s, "HALLO"))
			cout<<"Case "<<sq++<<": "<<"GERMAN"<<endl;
		else if(!strcmp(s, "BONJOUR"))
			cout<<"Case "<<sq++<<": "<<"FRENCH"<<endl;
		else if(!strcmp(s, "CIAO"))
			cout<<"Case "<<sq++<<": "<<"ITALIAN"<<endl;
		else if(!strcmp(s, "ZDRAVSTVUJTE"))
			cout<<"Case "<<sq++<<": "<<"RUSSIAN"<<endl;
		else
			cout<<"Case "<<sq++<<": "<<"UNKNOWN"<<endl;
	}
	return 0;
}