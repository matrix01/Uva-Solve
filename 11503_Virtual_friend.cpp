#include<iostream>
#include<stdio.h>
#include<cstring>
#define fin (freopen("12592_in.txt","r",stdin))
#define fout (freopen("12592_out.txt","w",stdout))
using namespace std;
struct friendship{
	char name[30];
	char fname[30];
};
int main(){
	friendship f;
	int count, i, j, k, t, fpair;
	cin>>t;
	while(t--){
		scanf("%d", &fpair);
		for(i=0; i<fpair; i++){
			gets(f.name);
			gets(f.fname);
		}
	}
	return 0;
}