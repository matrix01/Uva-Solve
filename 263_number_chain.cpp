#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstring>
#include<string>
#include<cstdlib>
#include<map>
#include<cctype>
using namespace std;
int main(){
	int n;
	char num[20], num2[20];
	while(cin>>n){
		if(n==0)break;
		sprintf(num, "%d", n);
		cout<<"Original number was "<<num<<endl;
		sort(num, num+strlen(num));
		strcpy(num2, num);
		reverse(num2, num2+strlen(num2));
		int num1=atoi(num);
		int rev=atoi(num2);
		int res=rev-num1;
		printf("%d - %d = %d\n", rev,num1, res);
		int len=1;
		map<int, bool>m;
		while(m[res]==false){
			m[res]=true;
			sprintf(num, "%d", res);
			sort(num, num+strlen(num));
			strcpy(num2, num);
			reverse(num2, num2+strlen(num2));
			num1=atoi(num);
			rev=atoi(num2);
			res=rev-num1;
			printf("%d - %d = %d\n", rev,num1, res);
			len++;
		}
		cout<<"Chain length "<<len<<endl<<endl;
	}
	return 0;
}