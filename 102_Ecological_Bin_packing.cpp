#include<stdio.h>
#include<string.h>
int main(){
	int move[6], min, i, j, n, p, flag=1;
	while(1){
		int a[4][4]={0};
		int sum=0;
		for(i=0; i<3; i++)
			for(j=0; j<3; j++){
				n=scanf("%d", &a[i][j]);
				if(n==EOF){
					flag=0;
					break;
				}
				sum+=a[i][j];
			}
		if(flag=0) break;
		move[0]=a[0][0]+a[1][2]+a[2][1];
		move[1]=a[0][0]+a[1][1]+a[2][2];
		move[2]=a[0][2]+a[1][0]+a[2][1];
		move[3]=a[0][2]+a[1][1]+a[2][0];
		move[4]=a[0][1]+a[1][0]+a[2][2];
		move[5]=a[0][1]+a[1][2]+a[2][0];
		for(i=0; i<6; i++)
			move[i]=sum-move[i];

		min=move[0];
		p=0;
		for(i=1;i<6;i++)
			if(min>move[i]){
				min=move[i];
				p=i;
			}
		if(p==0)
			printf("BCG %ld\n",min);
		else if(p==1)
			printf("BGC %ld\n",min);
		else if(p==2)
			printf("CBG %ld\n",min);
		else if(p==3)
			printf("CGB %ld\n",min);
		else if(p==4)
			printf("GBC %ld\n",min);
		else if(p==5)
			printf("GCB %ld\n",min);
	}
	return 0;
}