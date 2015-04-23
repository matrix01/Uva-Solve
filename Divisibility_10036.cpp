#include<iostream>
#include<cstdio>
#include<vector>
#include<cstring>
using namespace std;
int dp[105][10005];
long n, k, a[10005];

//vector<long> v1;
//vector<long> v2;
bool getans(int sum, int pos){
	bool check = false;
	sum = ((sum%k) + k) % k;
	if (pos == n){
		if (sum == 0)
			return true;
		else 
			return false;
	}
	if (dp[sum][pos] != -1) return dp[sum][pos];

	check = check | getans(sum + a[pos], pos + 1);
	check = check | getans(sum - a[pos], pos + 1);
	cout << check << endl;
	//v1.push_back(sum);
	//v2.push_back(pos);
	return dp[sum][pos] = check;
}
int main(){
	int t;
	cin >> t;
	
	while (t--){
		memset(dp, -1, sizeof(dp));
		//v1.clear();
		//v2.clear();
		cin >> n >> k;
		for (int i = 0; i < n; i++)
			cin >> a[i];
		bool ans = getans(a[0], 1);

		if (ans)
			cout << "Divisible" << endl;
		else
			cout << "Not divisible" << endl;
		//int s = v1.size();
		//for (int i = 0; i < s; i++)
			//dp[v1[i]][v2[i]] = -1;
	}
	return 0;
}