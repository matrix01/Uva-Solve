#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	int x, i;
	bool flag;
	int arr[] = { 561, 1105, 1729, 2465, 2821,
		6601, 8911, 10585, 15841, 29341,
		41041, 46657, 52633, 62745, 63973 };
	while (cin >> x && x!=0){
		flag = false;
		for (int i = 0; i < 15; i++)
		if (x == arr[i]){
			flag = true;
			break;
		}
		if (flag == true)
			printf("The number %d is a Carmichael number.\n", x);
		else
			printf("%d is normal.\n", x);
	}
	return 0;
}