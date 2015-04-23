#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int T, d, r, x, y, p, i, j;
int kill[1025][1025];
int check(int x, int y){
	return x>=0 && x<1025
		&& y>=0&&y<1025;
}
int main(){

	cin>>T;
	while(T--){
		memset(kill, 0, sizeof kill);
		cin>>d>>r;
		while(r--){
			cin>>x>>y>>p;
			for(i=x-d; i<=x+d; i++)
				for(j=y-d; j<=y+d; j++)
					if(check(i, j))
						kill[i][j]+=p;
		}
		int flag=-1;
		for(i=0; i<1025; i++)
			for(j=0; j<1025; j++)
				if(kill[i][j]>flag){
					flag=kill[i][j];
					x=i;
					y=j;
				}
		cout<<x<<" "<<y<<" "<<flag<<endl;
	}
	return 0;
}