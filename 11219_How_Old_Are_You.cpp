#include<iostream>
#include<stdio.h>
#define fin (freopen("10469_in.txt","r",stdin))
#define fout (freopen("10469_out.txt","w",stdout))
using namespace std;
int main(){
	int cd, cm, cy, bd, bm, by, age, t, sq=0, ch, ch1, ch2, ch3;
	cin>>t;
	while(t--){
		scanf("%d/%d/%d", &cd, &cm, &cy);
		scanf("%d/%d/%d", &bd, &bm, &by);
		age=cy-by;
		if(cm<bm) age--;
		else if(cm==bm)
			if(cd<bd) age--;
		cout<<"Case #"<<++sq<<": ";
		if(age<0)	cout<<"Invalid birth date"<<endl;
		else if(age>130) cout<<"Check birth date"<<endl;
		else cout<<age<<endl;
	}


	return 0;
}