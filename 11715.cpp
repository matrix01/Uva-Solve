#include<iostream>
#include<stdio.h>
#include<cmath>
#define fin (freopen("11715_in.txt", "r", stdin))
#define fout (freopen("11715_out.txt", "w", stdout))
using namespace std;
int main(){
	int op, sq=0;
	double u, v, t, s, a;
	while(cin>>op&&op!=0){
		cout<<"Case "<<++sq<<": ";
		switch(op){
		case 1:
			cin>>u>>v>>t;
			a=(v-u)/t;
			s=((u+v)/2)*t;
			printf("%.3lf %.3lf\n", s, a);
			break;
		case 2:
			cin>>u>>v>>a;
			t=(v-u)/a;
			s=((u+v)/2)*t;
			printf("%.3lf %.3lf\n", s, t);
			break;
		case 3:
			cin>>u>>a>>s;
			v=((u*u)+2*a*s);
			v=sqrt(v);
			t=(v-u)/a;
			printf("%.3lf %.3lf\n", v, t);
			break;
		case 4:
			cin>>v>>a>>s;
			u=(v*v)-2*a*s;
			u=sqrt(u);
			t=(v-u)/a;
			printf("%.3lf %.3lf\n", u, t);
			break;
		}
	}
	return 0;
}
