#include<iostream>
#include<cstring>
#include<cstdio>
#include<algorithm>
#include<string>
using namespace std;
struct DNA{
	string dna;
	int measure;
}D[105];
int countmeasure(string s){
	int l=s.length(), cnt=0;
	for(int i=0; i<l; i++)
		for(int j=i+1; j<l; j++)
			if(s[i]>s[j])cnt++;
	return cnt;
}
bool compare(DNA a, DNA b){
	if(a.measure<b.measure)return true;
	return false;
}
int main(){
	int t, n, m;
	bool newline=false;
	cin>>t;
	while(t--){
		cin>>n>>m;
		for(int i=0; i<m; i++){
			cin>>D[i].dna;
			D[i].measure=countmeasure(D[i].dna);
		}
		//for(int i=0; i<m; i++)
			//cout<<D[i].measure<<endl;
		stable_sort(D, D+m, compare);
		if(newline)cout<<endl;
		newline=true;
		for(int i=0; i<m; i++)
			cout<<D[i].dna<<endl;
	}
	return 0;
}