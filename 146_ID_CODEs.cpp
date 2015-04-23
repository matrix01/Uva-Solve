#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
	string s;
//	cout<< s << endl;
	while (cin >> s){
		if (s[0] == '#') break;

		if (next_permutation(s.begin(), s.end())){
			cout << s << endl;
		}
		else
			cout << "No Successor" << endl;
	}
	return 0;
}