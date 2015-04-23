#include<stdio.h>
void main(){
	struct freq{
		int asci;
		int fre;
	}f[128], f1[100];
	int i, temp, j;
	for(i=0; i<5; i++){
		scanf("%d %d", &f[i].fre, &f[i].asci);
	}
	for(i=1; i<5; i++){
		for(j=0; j<i; j++){
			if(f[i].fre<f[j].fre){
				f1[0]=f[j];
				f[j]=f[i];
				f[i]=f1[0];
			}
		}
	}
	for(i=0; i<5; i++){
		printf("%d %d\n", f[i].asci, f[i].fre);
	}
}
