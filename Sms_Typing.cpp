/*********************************
*    Accepted
*	Be careful when use gets
***********************************/

#include<stdio.h>
#include<string.h>
int main(){
	char keypad1[]={"adgjmptw "};
	char keypad2[]={"behknqux"};
	char keypad3[]={"cfilorvy"};
	char msg[110];
	int t, i, j, k;
	scanf("%d%*c", &t);	//use %*c to avoid wrong ans. because gets will give a garbage value.
	for(i=1; i<=t; i++){
		int count=0;
		gets(msg);
		int len;
		len=strlen(msg);
		for(k=0; k<len; k++){
			for(j=0; j<9; j++)
				if(msg[k]==keypad1[j]){
					count++;
					break;
				}
			for(j=0; j<8; j++)
				if(msg[k]==keypad2[j]){
					count+=2;
					break;
				}
			for(j=0; j<8; j++)
				if(msg[k]==keypad3[j]){
					count+=3;
				}
			if(msg[k]=='s'||msg[k]=='z') count+=4;
		}
		printf("Case #%d: %d\n", i, count);
	}
	return 0;
}
