#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main(){
	int h, m, s, speed=0, newspeed, now, time=0;
	double distanse=0;
	char input[1000];
	while(cin.getline(input, sizeof(input))){
		int n=sscanf(input, "%d:%d:%d %d", &h, &m, &s, &newspeed);
		now=h*3600+m*60+s;
		distanse+=(now-time)*speed;
		time=now;
		
		if(n==3)
			printf("%02d:%02d:%02d %.2lf km\n",h, m, s, distanse/3600);
		else if(n==4)
			speed=newspeed;

	}
	return 0;
}