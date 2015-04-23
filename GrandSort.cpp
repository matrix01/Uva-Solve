#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class sort_map{
public:
	string key;
	int val;
};

bool Sort_by_key(const sort_map& a, const sort_map& b){
	return a.key < b.key;
}
bool Sort_by_val(const sort_map& a, const sort_map& b){
	return a.val > b.val;
}

int main(){
//	freopen("g.txt", "r", stdin);
//	freopen("gout.txt", "w", stdout);
	int t, sq =1;
	cin >> t;
	while (t--){
		map<string, int> d;
		map<string, int>::iterator it;
		vector< sort_map > v;
		vector< sort_map >::iterator itv;
		sort_map sm;
		
		int n, val; string str;
		cin >> n;
		for (int i = 0; i < n; i++){
			cin >> str>>val;
			d[str] = val;
		}
		for (it = d.begin(); it != d.end(); ++it){
			sm.key = (*it).first; sm.val = (*it).second;
			v.push_back(sm);
		}
		
		sort(v.begin(), v.end(), Sort_by_key);
		sort(v.begin(), v.end(), Sort_by_val);
		cout << "Case " << sq++ << ":" << endl;
		for (itv = v.begin(); itv != v.end(); ++itv){
			cout << (*itv).key << endl;
		}
		if (t > 0) cout << endl;
	}
	return 0;
}