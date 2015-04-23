#include<iostream>
#include<stdio.h>
#include<cstring>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;
int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
string month[12]={"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
bool leapyear(int yr){
	return ((yr%400==0)||((yr%4==0)&&(yr%100!=0)));
}
int monthindex(string m){
	for(int i=0; i<12; i++)
		if(m==month[i])
			return i+1;
}
int main(){
	int t, year, day, dif, sq=1;
	char c;
	string m;
	cin>>t;
	while(t--){
		cin>>year;
		cin>>c;
		if(leapyear(year)) days[1]=29;
		else days[1]=28;
		getline(cin, m, '-');
		cin>>day>>dif;
		int i, mon;
		mon=monthindex(m);
		for(i=0; i<dif; i++){
			day++;
			if(day>days[mon-1]){
				mon++;
				day=1;
				if(mon>12){
					year++;
					mon=1;
					if(leapyear(year)) days[1]=29;
					else days[1]=28;
				}
			}
		}
		printf("Case %d: %0004d-", sq++, year);
		cout<<month[mon-1];
		printf("-%02d\n", day);
	}
	return 0;
}