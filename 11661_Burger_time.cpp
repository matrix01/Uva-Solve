#include<iostream>
#include<cstring>
#include<cstdio>
#include<string>
#include<cmath>
using namespace std;
int min(int a, int b){
	if(a<b){
		//cout<<a<<endl;
		return a;
	}
	return b;
}

int main(){
	int len;
	string r;
	while(cin>>len&&len){
		cin>>r;
		int dis=2147483647, last=0;
		for (int i = 0; i < len; i++) {
            if (r[i] == 'Z') dis =0;
            if (r[i] != '.') {
                if (r[last] !='.' && r[i] != r[last]) {dis = min(dis, i - last);
				//cout<<dis<<" "<<last<<" "<<i<<endl;}
                last = i;
            }
        }
		cout<<dis<<endl;
	}

	return 0;
}