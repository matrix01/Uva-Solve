#include<iostream>
#include<stdio.h>
#include<cstdlib>
#include<cstring>
#include<string>
#include<cmath>
#include<cctype>
#include<algorithm>
char str_judge[15000], str_team[15000];
using namespace std;
bool accepted(int n, int m){
	if(n!=m) return false;
	else if(strcmp(str_judge, str_team)!=0) return false;
	return true;
}
bool prsentation(){
	char temp[1500], temp1[1500];
	int i, j, l, l1;
	l=strlen(str_judge);
	l1=strlen(str_team);
	j=0;
	for(i=0; i<l; i++)
		if(isdigit(str_judge[i]))
			temp[j++]=str_judge[i];
	temp[j]=0;
	j=0;
	for(i=0; i<l1; i++)
		if(isdigit(str_team[i]))
			temp1[j++]=str_team[i];
	temp1[j]=0;
	if(strcmp(temp, temp1)==0) return true;
	return false;
}
int main(){
	int n, i, sq=1, m;
	while(scanf("%d%*c", &n)&&n!=0){
		char temp[15000];
		str_judge[0]=0;
		while(n--){
			gets(temp);
			strcat(str_judge, temp);
		}
		///printf("%s\n", str_judge);
		str_team[0]=0;
		scanf("%d%*c", &m);
		while(m--){
			gets(temp);
			strcat(str_team, temp);
		}
		if(accepted(n, m)==true)
			printf("Run #%d: Accepted\n", sq++);
		else if(prsentation()==true) printf("Run #%d: Presentation Error\n", sq++);
		else printf("Run #%d: Wrong Answer\n", sq++);
	}
	return 0;
}