#include<stdio.h>
int gcd(int a, int b){
    return (b==0)?a:gcd(b, a%b);        
}
int main(){
    int a, b;
	while (scanf ("%ld %ld", &a, &b) != EOF) {
        if (gcd (a, b) == 1)
        printf("%10ld%10ld    %s\n\n", a, b, "Good Choice");
        else
        printf("%10ld%10ld    %s\n\n", a, b, "Bad Choice");
    }
    return 0;
}
