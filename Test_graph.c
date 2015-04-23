#include<stdio.h>
int main(){
	int m[25][25];
	int v, e;
	char ch=97;
	char ch1=98;
	int i, j, k;
	scanf("%d%d", &v, &e);
	for(i=0; i<v; i++){
		for(j=0; j<e; j++){
			scanf("%d", &m[i][j]);
			if(m[i][j]==0){
				printf("%c is not conected to %c\n", ch++, ch1++);	
			}
		}
	}
	return 0;
}
