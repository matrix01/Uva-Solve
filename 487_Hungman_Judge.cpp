#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<list>
using namespace std;

int main(){
	int t;
	while (cin >> t){
		if (t == -1) break;
		string s1, s2;
		cin >> s1 >> s2;
		list<char> l(&s1[0], &s1[s1.size()]);

		int len = s2.size();
		int hung = 0;
		for (int i = 0; i < len; i++){
			if (!l.empty()){
				int size = l.size();
				l.remove(s2[i]);
				if (size == l.size())
					hung++;
			}
			else
				break;
		}

		cout << "Round "<< t << endl;
		if (l.empty() && hung < 7) cout << "You win." << endl;
		else if (!l.empty() && hung < 7) cout << "You chickened out." << endl;
		else cout <<"You lose."<< endl;
	}
	return 0;
}