#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int p[10050], N, M, i, j, b1;
	while(cin>>N){
		for(i=0; i<N; i++) cin>>p[i];
		cin>>M;

		sort(p, p+N);

		for(i=0; i<N; i++){
			for(j=N-1; j>=i; j--){
				if(p[i]+p[j]==M){
					b1=p[i];
				}
				else if(p[i]+p[j]<M)
					break;
			}
		}
		cout << "Peter should buy books whose prices are " << b1 << " and " << M-b1<< ".\n" << endl;
	}
	return 0;
}