#include<iostream>
#include<vector>
using namespace std;
int main(){
	int k, n, d, x;
	cin>>k;
	while(k--){
		int res=0, sum=0;
		cin>>d>>n;
		vector<int>log(d);
		log[0]++;
		while(n--){
			cin>>x;
			sum=(sum+x)%d;
			res+=log[sum]++;
		}
		cout<<res<<endl;
	}

	return 0;
}