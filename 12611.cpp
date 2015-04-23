#include<iostream>
using namespace std;
#define fin (freopen("12611_in.txt","r",stdin))
#define fout (freopen("12611_out.txt","w",stdout))
int main(){
	int t, cen, sq=0;
	int left, right, area, half;
	cin>>t;
	while(t--){
		cin>>cen;
		area=cen*5;
		left=area*(.45);
		right=area-left;
		half=(area*.6)/2;
		cout<<"Case "<<++sq<<":"<<endl;
		cout<<-left<<" "<<half<<endl;
		cout<<right<<" "<<half<<endl;
		cout<<right<<" "<<-half<<endl;
		cout<<-left<<" "<<-half<<endl;
	}
	return 0;
}
