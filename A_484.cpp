#include <stdio.h>
#include <string.h>
#include<iostream>
using namespace std;
int match(const char *s, const char *p)
{
	int c = 0, l = strlen(p);

	while (*s != '\0') {
		if (strncmp(s++, p, l)) continue;
		c++;
	}
	return c;
}

int main()
{
	int t, n;
	char s[1000005], p[505];
	cin >> t;

	while (t--){
		cin >> n;
		cin >> s;
		while (n--){
			int c = match(s, p);
			cout << c << endl;
		}
	}
	return 0;
}