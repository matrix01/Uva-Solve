/***********************************
*	Accepted
* simple sorting problem
************************************/

#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int salary[3], t, sq=1;
	cin>>t;
	int i;
	while(t--){
		for(i=0; i<3; i++) cin>>salary[i];
		sort(salary, salary+i);
		cout<<"Case "<<sq++<<": "<<salary[1]<<endl;
	}
	return 0;
}