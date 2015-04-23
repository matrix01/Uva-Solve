#include<iostream>
using namespace std;
int main(){
	int n, k, x, y;
	int a[100005], b[100005];
	while (cin >> n >> k >> x >> y){
		for (int i = 0; i < n; i++)cin >> a[i];
		for (int i = 0; i < k; i++)cin >> b[i];
		int count = 0;
		for (int i = 0, j = 0; i < n && j < k;){
			if (b[j] < a[i] - x)
				j++;
			else if (b[j]> a[i] + y)
				i++;
			else{
				a[count] = ++i;
				b[count] = ++j;
				count ++;
			}
		}
		cout << count << endl;
		for (int i = 0; i < count; i++)
			cout << a[i] << " " << b[i] << endl;
	}

	return 0;
}