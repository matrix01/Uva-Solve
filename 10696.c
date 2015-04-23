#include<stdio.h>
unsigned int k, n;
int f91(unsigned int i){
	if(i>=101)
		return i-10;
	else
		return f91(f91(i+11));
}
int main(){
	while(1){
		scanf("%u", &n);
		if(n==0) break;
		k=f91(n);
		printf("f91(%d) = %d\n", n, k);
	}
	return 0;
}
