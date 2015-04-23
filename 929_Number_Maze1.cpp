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
#define MAX             100000000
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
template <class T, class U> inline T min (T &a, U &b) { return a < b ? a : b; }
//template< class T > T gcd(T a, T b) { return (b != 0 ? gcd<T>(b, a%b) : a); }
//template< class T > T lcm(T a, T b) { return (a / gcd<T>(a, b) * b); }
//static struct _ { ios_base :: Init Init; _ () { cin.sync_with_stdio (false); cin.tie (false); } } _;
//{***************[        Directions       ]***************
int dx[]={1,0,-1,0};int dy[]={0,1,0,-1}; //4 Direction
//int dx[]={1,1,0,-1,-1,-1,0,1};int dy[]={0,1,1,1,0,-1,-1,-1};//8 direction
//int dx[]={2,1,-1,-2,-2,-1,1,2};int dy[]={1,2,2,1,-1,-2,-2,-1};//Knight Direction
//int dx[6]={2,1,-1,-2,-1,1};int dy[6]={0,1,1,0,-1,-1}; //Hexagonal Direction
//}
//{***************[        IO               ]***************
#define rd              freopen ( "input.txt" , "r" , stdin )
#define wr              freopen ( "output.txt" , "w" , stdout )
#define max 100
int parent[max][max];
int parent1[max][max];
bool visited[max][max];
bool discoverd[max][max];
queue<int> q;
int row, col;
bool valid(int i, int j){
	if (j < col && i < row && j >= 0 && i >= 0) return true;
	return false;
}
void bfs(int x, int y){
	q.push(x);
	q.push(y);

	while (!q.empty()){
		int i = q.front(); q.pop();
		int j = q.front(); q.pop();
		visited[i][j] = true;
		//cout<<"I am Oscar"<<endl;
		discoverd[i][j] = true;
		for (int k = 0; k<4; k++){
			//cout<<"I am bfs"<<endl;
			if (parent[i + dx[k]][j + dy[k]] == 1 && visited[i + dx[k]][j + dy[k]] != true && valid(i + dx[k], j + dy[k]) == true){
				if (discoverd[i + dx[k]][j + dy[k]] != true){
					parent[i + dx[k]][j + dy[k]] = parent[i][j] + parent[i + dx[k]][j + dy[k]];
					discoverd[i + dx[k]][j + dy[k]] = true;
				}
				q.push(i + dx[k]);
				q.push(j + dy[k]);
				//	cout<<"I am bfs"<<endl;
			}
		}
	}
}

int main(){
	int i, j, t;
	int n, m;
	cin>>t;
	while(t--){
		for(i=0; i<max; i++)
			for(j=0; j<max; j++) parent[i][j]=MAX;
		cin>>n>>m;
		for(i=1; i<=n; i++)
			for(j=1; j<=m; j++)
				cin>>parent[i][j];
		bfs(0, 0);
		for(int i=1; i<=n; i++){
			for(j=1; j<=m; j++)
				cout<<parent[i][j]<<" ";
			cout<<endl;
		}

		cout<<parent[n][m]<<endl;
	}
	return 0;
}