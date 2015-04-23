#include<iostream>
#include<list>
#include<string>
using namespace std;
int main(){
	list<string>l;
	string s;
	int n;
	cin >> n;
	while (n--){
		cin >> s;
		l.push_back(s);
	}
	l.sort();
	l.unique();
	list<string>::iterator it;
	it = l.begin();
	cout << endl;
	for (it = l.begin(); it != l.end(); it++){
		cout << *it << endl;
	}
	return 0;
}