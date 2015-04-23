#include<iostream>
#include<cstring>
using namespace std;
int main(){
	char str1[300000], str2[300000];
	long long l1, l2, i, j;
	while(cin>>str1>>str2){
		l1=strlen(str1);
		l2=strlen(str2);
		j=0;
		for(i=0; i<l2; i++){
			if(str2[i]==str1[j])
			j++;
		}
		if(j==l1)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
	return 0;
}
