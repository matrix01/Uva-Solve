#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	t = t + 1;
	int flag = 0;
	while (t--){
		char ch, prevch = 'Z';
		int prevcount = 0, sum = 0, i = 0;

		while (scanf("%c", &ch) && ch != '\n'){
			if (ch == 'O'){
				if (prevch == 'O'){
					sum += prevcount + 1;
					prevcount++;
					prevch = 'O';
				}
				else{
					sum += 1;
					prevcount++;
					prevch = 'O';
				}
			}
			else{
				prevch = 'Z';
				prevcount = 0;
			}
			flag = 1;
		}
		if (flag == 1)
			printf("%d\n", sum);
	}
	return 0;
}