#include<iostream>
using namespace std;
long long num1[1000010], num2[1000010], result[1000010];
int main(){
	long long n, m, i, j, cont=0, tmp;
	bool flag=true;
	cin>>n;
	tmp=n;
	while(n--){
		cin>>m;
		for(i=m-1; i>=0; i--){
			cin>>num1[i];
			cin>>num2[i];
		}
		long long res, rem=0; j=0;
		for(i=0; i<m; i++){
			res=num1[i]+num2[i]+rem;
			result[j++]=res%10;
			rem=res/10;
		}
		while(rem!=0){
			result[j++]=rem%10;
			rem/=10;
		}
		for(i=j-1; i>=0; i--)
			cout<<result[i];
		cout<<endl;
		if(cont<tmp-1){
			cout<<endl;
			cont++;
		}
	}

	return 0;
}