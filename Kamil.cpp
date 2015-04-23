#include<iostream>
#include<string>
using namespace std; int main(){ string s; while (cin >> s){ int res = 1; for (int i = 0; i<s.length(); i++){ if (s[i] == 'T' || s[i] == 'D' || s[i] == 'L' || s[i] == 'F')res *= 2; }cout << res << endl; }return 0; }