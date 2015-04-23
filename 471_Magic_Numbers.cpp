#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

#define MaxN 9876543210
bool check(unsigned long long n){
	int digits[10] = {0};
	while (n){
		digits[n % 10]++;
		if (digits[n % 10] > 1) return false;
		n = n / 10;
	}
	return true;
}
int main()
{
	unsigned long long int i, j, max;
	int c;
	scanf("%d", &c);
	while (c--)
	{
		scanf("%llu", &j);
		max = MaxN / j;
		for (i = 1; i <= max; i++)
		if (check(i) && check(j*i))
			printf("%llu / %llu = %llu\n", j*i, i, j);
		if (c)
			cout << endl;
	}
	return 0;
}