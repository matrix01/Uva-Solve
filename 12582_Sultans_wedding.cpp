#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>
#include<string>
using namespace std;
char parent[26], current, past;
bool visited[26];
int main(){
	 int count[26], t, l, i, j, sq=1;
	 string s;
	 scanf("%d%*c", &t);
	 while(t--){
		cin>>s;
		l=s.length();
		for(i=0; i<26; i++){
			visited[i]=false;
			count[i]=0;
		}
		past=s[0]-'A';
		visited[past]=true;
		for(i=1; i<l; i++){
			current=s[i]-'A';
			if(!visited[current]){
				count[current]++;
				count[past]++;
				parent[current]=past;
				visited[current]=true;
				past=current;
			}
			else
				past=parent[current];
		}
		printf("Case %d\n", sq++);
		for(i=0; i<26; i++)
			if(count[i])
				printf("%c = %d\n", i+'A', count[i]);
	 }

	return 0;
}