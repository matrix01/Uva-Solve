#include<iostream>
#include<string>
#include<cctype>
#include<algorithm>
using namespace std;
bool cmp(const char &a, const char &b){
	if(tolower(a)<tolower(b)) return true;
	if(tolower(a)==tolower(b)) return a<b;
	else return false;
}
int main(){
	int T;
	string s;
	cin>>T;
	while(T--){
		cin>>s;
		sort(s.begin(), s.end(), cmp);
		do{
			cout<<s<<endl;
		}while(next_permutation(s.begin(), s.end(), cmp));
	}
	return 0;
}