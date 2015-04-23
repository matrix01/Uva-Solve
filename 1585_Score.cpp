using namespace std;
//{***************[        C Headers        ]***************
#include <cstdlib>
#include <cstring>
#include <cassert>
#include <climits>
#include <cstdio>
#include <cctype>
#include <cfloat>
#include <ctime>
#include <cmath>
//{***************[        C++ Headers      ]***************
#include <algorithm>
#include <iostream>
#include <utility>
#include <iomanip>
#include <sstream>
#include <fstream>
#include <numeric>
#include <complex>
#include <vector>
#include <string>
#include <queue>
#include <stack>
#include <list>
#include <map>
#include <set>
#include <map>
//{***************[        Loops            ]***************
#define forab(i,a,b) for( __typeof (a) i = a ; i <= b ; i++ )
#define forba(i,a,b) for( __typeof (a) i = a ; i >= b ; i-- )
#define rep(i,n) forab(i,0,n-1)
#define repn(i,n) forab(i,1,n)
#define repr(i,n) forba(i,n-1,0)
#define repnr(i,n) forba(i,n,1)
#define forstl(i, s) for ( __typeof ((s).end ()) i = (s).begin (); i != (s).end (); i++ )
//{***************[        Values           ]***************
#define pi              3.141592653589793
#define eps             2.718281828459045
#define euler           0.577215664901532
#define ln              log
#define LOG             log10
#define INF             1<<29
#define MAX             1000000
//{***************[        Macros           ]***************
#define memo(a,b)       memset (a,b,sizeof(a))
#define all(a)          a.begin () , a. end ()
#define clr(a)          a.clear ()
#define sz(a)           a.size()
#define sf              scanf
#define pf              printf
#define si(a)           scanf("%d",&a)
#define pb              push_back
#define MP              make_pair
#define nl              puts("")
#define vi              vector < int >
#define vll             vector < ll >
#define pii             pair < int , int >
template <class T, class U> inline T max(T &a, U &b) { return a > b ? a : b; }
template <class T, class U> inline T min(T &a, U &b) { return a < b ? a : b; }
//template< class T > T gcd(T a, T b) { return (b != 0 ? gcd<T>(b, a%b) : a); }
//template< class T > T lcm(T a, T b) { return (a / gcd<T>(a, b) * b); }
//static struct _ { ios_base :: Init Init; _ () { cin.sync_with_stdio (false); cin.tie (false); } } _;
//{***************[        Directions       ]***************
//int dx[]={1,0,-1,0};int dy[]={0,1,0,-1}; //4 Direction
//int dx[]={1,1,0,-1,-1,-1,0,1};int dy[]={0,1,1,1,0,-1,-1,-1};//8 direction
//int dx[]={2,1,-1,-2,-2,-1,1,2};int dy[]={1,2,2,1,-1,-2,-2,-1};//Knight Direction
//int dx[6]={2,1,-1,-2,-1,1};int dy[6]={0,1,1,0,-1,-1}; //Hexagonal Direction
//}
//{***************[        IO               ]***************
#define rd              freopen ( "input.txt" , "r" , stdin )
#define wr              freopen ( "output.txt" , "w" , stdout )

int main(){
	int t;
	string s;
	
	cin >> t;
	while (t--){
		cin >> s;
		int len = s.length();
		int ar[85];
		ar[0] = 0;
		for (int i = 0; i <= len; i++){
			if (s[i] == 'O'){
				if (i>0 && s[i - 1] == 'O')
					ar[i] = ar[i - 1] + 1;
				else
					ar[i] = 1;
			}
			else
				ar[i] = 0;
		}
		int sum = 0;
		for (int i = 0; i < len; i++){
		//	cout << ar[i] << " ";
			sum += ar[i];
		}
	//	cout << endl;
		cout << sum << endl;
	}
	return 0;
}