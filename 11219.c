#include<stdio.h>
#define fin (freopen("10469_in.txt","r",stdin))
#define fout (freopen("10469_out.txt","w",stdout))
int main(){
	int cd, cm, cy, bd, bm, by, age, t, sq=0;
	scanf("%d", &t);
	while(t--){
		scanf("%d/%d/%d", &cd, &cm, &cy);
		scanf("%d/%d/%d", &bd, &bm, &by);
		age=cy-by;
		if(cm<bm) age--;
		else if(cm==bm)
			if(cd<bd) age--;
		printf("Case #%d: ", ++sq);
		if(age<0)	printf("Invalid birth date\n");
		else if(age>130) printf("Check birth date\n");
		else printf("%d\n", age);
	}
	return 0;
}
