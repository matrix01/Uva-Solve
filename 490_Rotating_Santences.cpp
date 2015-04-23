#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<algorithm>
using namespace std;
int main(){
	int i, j, ind=0;
	char input[105][105];
	for(i=0; i<105; i++)
		for(j=0; j<105; j++) input[i][j]=' ';

	while(gets(input[ind]))
		ind++;

	int max=0;
	for(i=0; i<ind; i++){
		int len=strlen(input[i]);
		if(max<len)
			max=len;
		input[i][len]=' ';
	}

	for(j=0; j<max; j++){
		for(int k=ind-1; k>=0; k--){
			printf("%c", input[k][j]);
		}
		cout<<endl;
	}
	return 0;
}