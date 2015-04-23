#include<iostream>
#include<vector>
using namespace std;
class WakingUpEasy{
public:
	int countAlarms(vector <int> volume, int S){
		int count = 0;
		
		while (S > 0){
			int t = volume.front();
			volume.erase(volume.begin());
			S -= t;
			cout << "S" << S << endl;
			volume.push_back(t);
			count++;
		}
		return count;
	}
};
int main(){
	vector<int> vol; int S;
	WakingUpEasy ob;
	int n;
	while (cin >> n){
		int x;
		for (int i = 0; i < n; i++){
			cin >> x;
			vol.push_back(x);
		}
		cin >> S;
		int res =ob.countAlarms(vol, S);
		cout << res << endl;
	}
	return 0;
}