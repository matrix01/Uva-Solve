#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include<iostream>
using namespace std;
// A utility function to print a substring str[low..high]
void printSubStr(char* str, int low, int high)
{
	for (int i = low; i <= high; ++i)
		printf("%c", str[i]);
}

// This function prints the longest palindrome substring (LPS)
// of str[]. It also returns the length of the longest palindrome
int longestPalSubstr(char *str)
{
	int maxLength = 1;  // The result (length of LPS)

	int start = 0;
	int len = strlen(str);

	int low, high;

	// One by one consider every character as center point of 
	// even and length palindromes
	for (int i = 1; i < len; ++i)
	{
		// Find the longest even length palindrome with center points
		// as i-1 and i.  
		low = i - 1;
		high = i;
		while (low >= 0 && high < len && str[low] == str[high])
		{
			if (high - low + 1 > maxLength)
			{
				start = low;
				maxLength = high - low + 1;
			}
			--low;
			++high;
		}

		// Find the longest odd length palindrome with center 
		// point as i
		low = i - 1;
		high = i + 1;
		while (low >= 0 && high < len && str[low] == str[high])
		{
			if (high - low + 1 > maxLength)
			{
				start = low;
				maxLength = high - low + 1;
			}
			--low;
			++high;
		}
	}

	printf("Longest palindrome substring is: ");
	printSubStr(str, start, start + maxLength - 1);

	return maxLength;
}

// Driver program to test above functions
int main(){
	int t, sq = 1;
	char sent[110];
	while (scanf("%d%*c", &t)){
		if (t == 0)break;
		printf("Case %d:\n", sq++);
		for (int x = 0; x<t; x++){
			gets(sent);
			int len = strlen(sent);
			char seq[40];
			bool flag = false;
			int k = 0;
			for (int i = 0; i<len; i++){
				if (sent[i] >= 'a'&& sent[i] <= 'z'){
					seq[k++] = sent[i];
					flag = true;
				}
				if (flag == true && sent[i] == ' ')break;
			}
			seq[k] = '\0';
			int n = strlen(seq);
			printf("%d\n", longestPalSubstr(seq));
		}
		cout << endl;
	}
	return 0;
}