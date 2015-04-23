#include<iostream>
#include<cstring>
#include<string>
#include<cstdio>
using namespace std;
int main(){
	string in;
	while(cin>>in){
		int h, m, s, c;
		h=(in[0]-48)*10+in[1]-48;
		m=(in[2]-48)*10+in[3]-48;
		s=(in[4]-48)*10+in[5]-48;
		c=(in[6]-48)*10+in[7]-48;
		int time=h*3600+m*60+s;
		time*=100;
		time+=c;
		printf("%07d\n",(time*125)/108);
	}
	return 0;
} 