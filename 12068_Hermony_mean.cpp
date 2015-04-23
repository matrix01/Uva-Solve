#include<iostream>
using namespace std;
template< class T > T gcd(T a, T b) { return (b != 0 ? gcd<T>(b, a%b) : a); }
template< class T > T lcm(T a, T b) { return (a / gcd<T>(a, b) * b); }
int main(){
	long long num[10];
	int t, n, sq=1;
	cin >> t;
	while (t--){
		cin >> n;
		long long l = 1;
		for (int i = 0; i < n; i++){
			cin >> num[i];
			l = l*num[i];
		}
		//cout << g << endl;
		long long sum = 0; 
		for (int i = 0; i < n; i++)
			sum += l / num[i];
		//cout << sum << endl;
		long long den = n*l;
		long long div = gcd(den, sum);
		cout<<"Case "<<sq++<<": " << den/div << "/" << sum/div << endl;
	}
	return 0;
}