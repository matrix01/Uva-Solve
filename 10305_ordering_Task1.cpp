#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <vector>
#include <map>
#include <sstream>
#include <set>
#include <math.h>
#define N 1000000
using namespace std;
 
int main ()
{
    int edges;
    int vertex;
    while(scanf ("%d %d", &vertex, &edges)){
	if(vertex==0&&edges==0) break;
    int inDegree [105];
	memset (inDegree, 0, sizeof(inDegree));
 
    vector <int> matrix [105];
 
    for ( int i = 0; i < edges; i++ ) {
        int a;
        int b;
        scanf ("%d %d", &a, &b);
 
        matrix [a].push_back (b);
        inDegree [b]++;
    }
 
    queue <int> Q;
 
    for ( int i = 1; i <= vertex; i++ ) {
        if ( inDegree [i] == 0 )
            Q.push (i);
    }
 
    vector <int> sortedList;
 
    while ( !Q.empty () ) {
        int pop = Q.front ();
        Q.pop ();
 
        sortedList.push_back (pop);
 
        for ( unsigned int i = 0; i < matrix [pop].size (); i++ ) {
            inDegree [matrix [pop] [i]]--;
            if ( inDegree [matrix [pop] [i]] == 0 )
                Q.push (matrix [pop] [i]);
        }
    }
	cout<<sortedList[0];
    for ( unsigned int i = 1; i < sortedList.size (); i++ )
        cout<<" " << sortedList [i];
    cout << endl;
	}
    return 0;
}