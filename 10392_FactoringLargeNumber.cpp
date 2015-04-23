using namespace std ;
//{***************[        C Headers        ]***************
#include <cstdlib>
#include <cstring>
#include <cassert>
#include <climits>
#include <cstdio>
#include <cctype>
#include <cfloat>
#include <ctime>
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
#define MAX             10000000
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
#define LL				long long
//template <class T, class U> inline T max (T &a, U &b) { return a > b ? a : b; }
//template <class T, class U> inline T min (T &a, U &b) { return a < b ? a : b; }
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
bool isPrime[MAX+1];
LL prime[MAX+1];
LL arr[MAX];
LL primeSeive(){
	LL k=0;
	memo(isPrime, true);
	isPrime[0]=isPrime[1]=false;
	LL sqr=(LL)sqrt(MAX);
	for(LL i=2; i<=sqr; i++)
		if(isPrime[i])
			for(LL j=i*i; j<=MAX; j+=i)
				isPrime[j]=false;
	for(LL i=0; i<=MAX; i++)
		if(isPrime[i])prime[k++]=i;
	//for(LL i=0; i<=100; i++)
		//cout<<prime[i]<<endl;
	return k-1;
}
int main(){
	
	LL k=primeSeive();
	unsigned LL n;
	LL c=0;
	rd;
	wr;
	while(cin>>n){
		if(n<0) break;
		c=0;
		memo(arr, 0);
		LL count=0, temp=-1;
		for(LL i=0; i<=k && n!=1; i++){
			if(n%prime[i]==0){
				arr[c++]=prime[i];
				n=n/prime[i];
			}
		}
		if(n>1)arr[c]=n;
		if(c==0)printf("    %lld\n", n);
		else
		for(int i=0; i<c; i++)
			printf("    %lld\n", arr[i]);
		cout<<endl;
	}
	return 0;
}