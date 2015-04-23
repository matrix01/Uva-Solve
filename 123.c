#include <stdio.h>
int main(){
	int i, j;
int A [4][4]={{67, 3} ,{ 78 , 9 , 0}, {9 ,9} ,{8, 9 }};
for(i=0; i<=3; i++){
for(j=0; j<=3; j ++){
printf("%d ", A[i][j]);
}
printf("\n");
}
return 0;
}
