#include<stdio.h>
#include<string.h>
void main(){
	struct frequency{
		int asci;
		int fre;	
	}f[128], f1;
	char sent[1010];
	int i, j, l, temp, fl=1;
	
	while(gets(sent)!=0){
		l=strlen(sent);
		for(i=0; i<128; i++){
			f[i].asci=0;
			f[i].fre=0;
		}
		
		for(i=0; i<l; i++){
			if(sent[i]>=32 && sent[i]<=127){
				temp=sent[i];
				f[temp].fre++;
				f[temp].asci=temp;
			}
		}
		for(i=1; i<128; i++){
			for(j=0; j<i; j++){
				if(f[i].fre<f[j].fre){
					f1=f[j];
					f[j]=f[i];
					f[i]=f1;
				}
				else if(f[i].fre==f[j].fre){
					if(f[i].asci>f[j].asci){
						f1=f[j];
						f[j]=f[i];
						f[i]=f1;
					}
				}
			}
		}
		if(fl!=1)
			printf("\n");
		fl=0;
		for(i=0; i<128; i++){
			if(f[i].fre>0)
				printf("%d %d\n",f[i].asci, f[i].fre);
		}
	}

}
