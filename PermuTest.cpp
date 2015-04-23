#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
	string s;
	//	cout<< s << endl;
	while (cin >> s){
		if (s[0] == '#') break;

		do {
			cout << s << endl;
		} while (next_permutation(s.begin(), s.end()));
	}
	return 0;
}