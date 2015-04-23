#include<stdio.h>
void main(){
	printf("Press ENTER to continue: ");
           char c=getchar();
           while (c != '\n')
             c=getchar();
}
