#include<stdio.h>
#include<string.h>

//using namespace std;
int main(){o
	char line[1000000];
	char name[5000];
	char fname[5000];
	int x, i, q, k, j,t, len, nlen, strt, end;
	//freopen("b_in.txt", "r", stdin);
	//freopen("b_out.txt", "w", stdout);
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
			//printf("%c\n", name[k]);
				for(strt=0; strt<len; strt++){
				//printf("%c\n", line[strt]);
					if(name[k]==line[strt]){
						fname[end++]=line[strt];
						//printf("%c\n", fname[end]);
						break;
						}
				}
			}
			fname[end+1]='\0';
			//printf("%s\n", fname);
			x=strcmp(fname, name);
			if(x==0)
				printf("Yes\n");
			else
				printf("No\n");
		}	
	}
	//fclose(stdin);
	//fclose(stdout);	
	return 0;
}
