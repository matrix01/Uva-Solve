#include<iostream>
using namespace std;
int gcd(int x,int y)
{
	int c,a,b;

	if(x>=y)
	{
		a=x;
		b=y;
	}
	else
	{
		a=y;
		b=x;
	}
	while(1)
	{
		c = a%b;
		if(c==0)
		return b;
		a = b;
		b = c;
	}
}
int main(){
	int i, j, G, N;
	
	while(cin>>N){
		if(N==0)break;
		G=0;
		for(i=1;i<N;i++)
		for(j=i+1;j<=N;j++){
			G+=gcd(i,j);
		}
		cout<<G<<endl;
	}
	return 0;
}