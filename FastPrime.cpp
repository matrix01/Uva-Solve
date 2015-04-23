/*******************************************************
*		Problem Name:			
*		Problem ID:				
*		Occassion:				_ Contest _ _ _
*
*		Algorithm:				
*		Special Case:			
*		Judge Status:			
*		Author:					Atiqur Rahman
*		Notes:					
*								
*******************************************************/
//#include <iostream>
#include <cstdio>
//#include <cmath>
#include <cstring>
//#include <new>
#include <vector>
#include <queue>
//#include <map>
#include <algorithm>
//#include <iomanip>//for cout formatting
#define	INF 2147483648
#define EPS 1e-8
using namespace std;

int main() {
	int n, i, j, no_of_prime = 0;

	bool isprime;
	scanf("%d", &n);

	for (i=2; i<=n; i++) {
		isprime = true;
		for (j=2; j<i; j++)
			if ((i%j) == 0)
				isprime = false;
		if (isprime == true)
			no_of_prime++;
	}
	printf("total primes upto %d: %d.\n", n, no_of_prime);
	
	return 0;
}
