#include<stdio.h>
#include<string.h>

int main(){
	char line[1000000];
	char name[5000];
	char fname[5000];
	int x, i, q, k, j,t, len, nlen, strt, end;

	scanf("%d", &t);
	for(i=1; i<=t; i++){
		scanf("%s", &line);
		len=strlen(line);
		scanf("%d", &q);
		printf("Case %d:\n", i);
		for(j=0; j<q; j++){
		x=0;
			scanf("%s", &name);
			nlen=strlen(name);
			end=0;
			for(k=0; k<nlen; k++){
				for(strt=0; strt<len; strt++){
					if(name[k]==line[strt]){
						fname[end++]=line[strt];
						break;
						}
				}
			}
			fname[end+1]='\0';
			x=strcmp(fname, name);
			if(x==0)
				printf("Yes\n");
			else
				printf("No\n");
		}	
	}
	return 0;
}

