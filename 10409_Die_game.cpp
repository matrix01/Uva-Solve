#include<iostream>
#include<string>
using namespace std;
int main(){
	int n;
	while(cin>>n&&n){
		int top=1, down=6;
		int east=4, west=3;
		int north=2, south=5;
		int tmp;
		while(n--){
			string direction;
			cin>>direction;
			int x;
			if(direction=="north") x=0;
			else if(direction=="south") x=1;
			else if(direction=="west") x=2;
			else x=3;
			switch(x){
				case 0:
					tmp=north;
					north=top;
					top=south;
					south=down;
					down=tmp;
					break;
				case 1:
					tmp=top;
					top=north;
					north=down;
					down=south;
					south=tmp;
					break;
				case 2:
					tmp=top;
					top=east;
					east=down;
					down=west;
					west=tmp;
					break;
				case 3:
					tmp=top;
					top=west;
					west=down;
					down=east;
					east=tmp;
					break;
			}
		}
		cout<<top<<endl;
	}
	return 0;
}