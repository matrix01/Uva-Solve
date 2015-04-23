#include<stdio.h>
int gcd(int a, int b){
    return (b==0)?a:gcd(b, a%b);        
}
int main(){
    int x, y;
    while(scanf("%d %d", &x, &y)==2){
        printf("%10d%10d    %s Choice\n\n",x,y,(gcd(x,y)==1)?"Good":"Bad");                    
    }
    system("pause");
    return 0;
}
