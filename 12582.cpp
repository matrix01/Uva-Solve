#include<iostream>
#include<cstring>
using namespace std;
int main(){
	int i, t, count[128], l;
	for(i=0; i<128; i++)
		count[i]=0;
	char str[10000];
	cin>>t;
	while(t--){
		cin>>str;
		l=strlen(str);
		for(i=0; i<l; i++){
			if(str[i]>=65||str[i]<=91){
				if(str[i+1]!=str[i])
					count[str[i]]++;
			}
		}
		for(i=0; i<128; i++){
			if(count[i]!=0){
				char ch=i;
				cout<<ch<<" = "<<count[i]<<endl;
			}
		}
	}
	return 0;
}