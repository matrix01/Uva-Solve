#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<list>
#include<algorithm>
using namespace std;
class EllysScrabble{
public:
	string s, s1;
	char l[51];
	bool vis[51];
	string getMin(string letters, int maxDistance){
		s = letters;
		sort(s.begin(), s.end());
		memset(vis, false, sizeof(vis));
		cout << s << endl;
		for (int i = 0; i < s.length(); i++){
			for (int j = 0; j < letters.length(); j++){
				if (vis[j] == false && s[i] == letters[j]){
					if (abs(i - j) <= maxDistance){
						vis[j] = true;
						l[i] = s[i];
						break;
					}
					else{
						l[j] = letters[j];
						vis[j] = true;
						break;
					}
				}
			}
		}
		for (int i = 0; i < s.length(); i++)
			s1 += l[i];
		return s1;
	}

};
int main(){
	int max;
	string s;
	cin >> s >> max;
	EllysScrabble e;
	string s1 = e.getMin(s, max);
	cout << s1 << endl;
	return 0;
}