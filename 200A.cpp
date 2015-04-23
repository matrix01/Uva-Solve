#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
class SpamChecker{
public:
	string spamCheck(string judgeLog, int good, int bad){
		int res = 0;
		for (int i = 0; i < judgeLog.length(); i++){
			if (judgeLog[i] == 'o'){
				res += good;
			}
			else if (judgeLog[i] == 'x'){
				res -= bad;
				if (res<0)
					break;
			}
		}
		if (res<0) return "SPAM";
		else return  "NOT SPAM";
	}
};
int main(){
	string s; int g, b;
	while (cin >> s >> g >> b){
		SpamChecker sc;
		string s1= sc.spamCheck(s, g, b);
		cout << s1 << endl;
	}
	return 0;
}