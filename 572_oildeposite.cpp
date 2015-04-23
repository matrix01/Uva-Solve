#include<iostream>
using namespace std;
int main(){
	int m, n;
	char a[101][101];
	while(1){
		int count=0;
		cin>>m>>n;
		if(m==0 && n==0)
			break;

		for(int i=0; i<m; i++){
			for(int j=0; j<n; j++){
				cin>>a[i][j];
			}
		}
		for(int k=0; k<m; k++)
			for(int l=0; l<n; l++){
				if(a[k][l]=='@')
					count++;
//				else if(a[k][l]=='@')
//					count++;		
			}
		cout<<count<<endl;
		}
	return 0;
}