#include<iostream>
#include<cstring>
using namespace std;
struct dictionary{
	char eng[100];
	char flang[100];
}dic[100005];
int i, j, k;
char word[100];
char p[100];
void bin_search(){
	//cout<<"checking"<<endl;
	bool flag=true;
	for(j=0; j<i; j++){
		cout<<p<<"     "<<dic[j].flang<<endl;
		if(strcmp(p, dic[j].flang)==0){
			cout<<dic[j].eng<<endl;
			break;
		}
		else
			flag=false;
	}
	if(flag==false) cout<<"eh"<<endl;
}
int main(){
	i=0;
	while(gets(word)){
		if(!strcmp(word, "")) break;
		else
			strcpy(dic[i++].eng,word);
		gets(dic[i].flang);
	}
	cout<<"value of i: "<<i<<endl;
	while(gets(p)){
		bin_search();
	}
	return 0;
}