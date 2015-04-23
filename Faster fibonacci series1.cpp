#include <iostream>
using namespace std;
int memo[10000];

int fibonacci(int n) {
  if (memo[n] != -1)
    return memo[n];

  if (n==1 || n==2)
    return 1;
  else
    return memo[n] = fibonacci(n-1) +fibonacci(n-2);
}
int main() {
	int fibo;
	int n;
	while(1){
		cin>>n;
		if(n==0)
			break;
		for(int i = 0; i < 10000; ++i)
			memo[i] = -1;
	
		fibo=fibonacci(n);
		cout<<fibo<<endl;
	}
	return 0;
}