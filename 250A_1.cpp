#include<iostream>
#include<string>
#include<list>
using namespace std;
class EllysSortingTrimmer{
public:
	string getMin(string S, int L){
		list <char> l, ll;
		string str, t;
		
			for (int tmp = S.length()-L; tmp >= 0; tmp--){
				for (int i = tmp; i < tmp + L; i++){
					l.push_back(S[i]);
					//cout << S[i];
				}
				//cout << endl;
				l.sort();

				for (int i = 0; i < tmp; i++)
					str += S[i];
				//cout << str << endl;;
				for (int i = 0; i < L; i++){
					str += l.front();
					l.pop_front();
				}
				//cout << str << endl;;
				S = str;
				str = "";
				//cout<<"New: " << S << endl;
			}
		return S;
	}
};
int main(){
	EllysSortingTrimmer e;
	string str; int L;
	cin >> str >> L;
	string tmp = e.getMin(str, L);
	cout << tmp << endl;;
	return 0;
}