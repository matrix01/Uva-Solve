#include <iostream>
#include<stdio.h>
#include <algorithm>
#include <cstring>
#include <cctype>
#include <stack>
#include <queue>
#include <vector>
#include <map>
#include <sstream>
#include <set>
#include <math.h>
#define fin (freopen("443_in.txt","r",stdin))
#define fout (freopen("443_out.txt","w",stdout))
using namespace std;
int main(){
	set<double> H;
	H.insert(1);
	set<double>::iterator it=H.begin();
	while(H.size()<7000){
		H.insert(*it*2);
		H.insert(*it*3);
		H.insert(*it*5);
		H.insert(*it*7);
		*it++;
	}
	vector<double> v(H.begin(), H.end());
	int n;
	while(cin>>n){
		if(n==0)break;
		char str [5];
 
        if ( n % 10 == 1 && (n % 100) / 10 != 1 )
            strcpy (str, "st");
        else if ( n % 10 == 2 && (n % 100) / 10 != 1 )
            strcpy (str, "nd");
        else if ( n % 10 == 3 && (n % 100) / 10 != 1)
            strcpy (str, "rd");
        else
            strcpy (str, "th");
        printf ("The %d%s humble number is %0.lf.\n", n, str, v [n - 1]);
	}
	return 0;
}