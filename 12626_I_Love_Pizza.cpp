#include<iostream>
#include<stdio.h>
#include<cstring>
#include<algorithm>
#define fin (freopen("12626_in.txt","r",stdin))
#define fout (freopen("12626_out.txt","w",stdout))
using namespace std;
int main(){
	char line[605];
	char comp[]={"MAGRIT"};
	int M[128];
	int t;
	for(int i=0; i<128; i++) M[i]=0;
	cin>>t;
	while(t--){
		cin>>line;
		int l=strlen(line);
		for(int i=0; i<l; i++){
			for(int j=0; j<6; j++){
				if(line[i]==comp[j])
					M[comp[j]]++;
			}
		}
		int A, R;
		if(M['A']>=3)
			A=M['A']/3;
		else
			A=0;
		if(M['R']>=2)
			R=M['R']/2;
		else
			R=0;
		int a[]={A, R, M['M'], M['G'], M['I'], M['T']};
		sort(a, a+6);
		cout<<a[0]<<endl;
		for(int i=0; i<128; i++) M[i]=0;
	}
	return 0;
}