#include<iostream>
using namespace std;
bool valid(int num){
	if (num == 0 || num == 1 || num == 6 || num == 8 || num == 9)return true;
	return false;
}
int main(){
	int n;
	while (cin >> n){
		int cnt = 0, i=0;
		bool flag = false;
		for (i = 10; i < 99; i++){
			int scnd = i % 10;
			int fst = i / 10;
			//cout << fst << " " << scnd << endl;
			if (valid(scnd) == true && valid(fst) == true){
				cnt += 2;
				if (cnt == n * 2){ uuu
					flag = true;
					//cout << i << " " << cnt << endl;
					break; }
			}
			else
				cnt = 0;
		}
		if (flag == false) cout << "Glupenky Pierre";
		else{
			int scnd = i % 10;
			int fst = i / 10;
			if (scnd == 9)scnd = 6;
			else if (scnd == 6) scnd = 9;
			if (fst == 6)fst = 9;
			else if (fst == 9)fst = 6;

			cout << scnd << fst;
			i--;
			for (int j = 0; j < n - 1; j++){
				int scnd = i % 10;
				int fst = i / 10;
				if (scnd == 9)scnd = 6;
				else if (scnd == 6) scnd = 9;
				if (fst == 6)fst = 9;
				else if (fst == 9)fst = 6;

				i--;
				cout << " " << scnd << fst;
			}
		}
		cout << endl;
	}
	return 0;
}