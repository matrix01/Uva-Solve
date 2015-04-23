#include<iostream>
#include<string>
#include<cctype>
#include<algorithm>
#include<stdio.h>
using namespace std;
struct rect{
	double x1;
	double x2;
	double y1;
	double y2;
}a[14];
int main(){
	char ch;
    int index = 0;
    while ( scanf ("%c", &ch) && ch != '*' ) {
        if ( ch != 'r' )
        continue;
        scanf ("%lf", &a [index].x1);
        scanf ("%lf", &a [index].y1);
        scanf ("%lf", &a [index].x2);
        scanf ("%lf", &a [index].y2);
        index++;
    }
	int count=0; 
	double x, y;
	while ( scanf ("%lf %lf", &x, &y) && x != 9999.9 && y != 9999.9 ) {
        bool flag = true;
        count++;
        for ( int i = 0; i < index; i++ ) {
            if ( x > a[i].x1 && x < a[i].x2 && y < a[i].y1 && y > a[i].y2 ) {
                printf ("Point %d is contained in figure %d\n", count, i + 1 );
                flag = false;
            }
        }
        if ( flag )
            printf ("Point %d is not contained in any figure\n", count);
    }
	return 0;
}