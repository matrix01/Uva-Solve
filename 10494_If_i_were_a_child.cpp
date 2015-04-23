#include<iostream>
using namespace std;
#define fin (freopen("10494_in.txt","r",stdin))
#define fout (freopen("10494_out.txt","w",stdout))
int main(){
	long long divdr, n, i;
	char num[5005], ch;
	while(cin>>num>>ch>>divdr){
		n=0;
		int op=ch;
		switch(op){
		case '/':
			i=0;
			while(n<divdr && num[i]) n=n*10+(num[i++]-48);
			if(n<divdr){ 
				cout<<"0"<<endl;
				break;
			}
			cout<<n/divdr;
			n=n%divdr;
			for(int k=i; num[k]; k++){
				n=n*10+num[k]-48;
				cout<<n/divdr;
				n=n%divdr;
			}
			cout<<endl;
			break;
		case '%':
			for(i=0; num[i]; i++){
				n=n*10+num[i]-48;
				n=n%divdr;
			}
			cout<<n<<endl;
			break;
		}
	}
	return 0;
}