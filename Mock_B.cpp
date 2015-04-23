#include <iostream>     // std::cout, std::boolalpha
#include <algorithm>    // std::lexicographical_compare
#include <cctype>       // std::tolower
#include<vector>
#include<string>
using namespace std;
// a case-insensitive comparison function:
char inp[100001][51];
vector<string, int>sentence;
 bool compareLex(string & a, const string & b) {
		return a< b;
}
int main () {
	int count=0; int N; string word;;
	cin>>N;
	for(int i=0; i<N; i++){
		cin>>word;
		count++;
		if(count>1){
			bool flag=false;
			for(int j=0; j<sentence.size(); j++){
				if(sentence[j]==word){
					flag=true;
					break;
				}
			}
			if(flag==false)sentence.push_back(word);
			else continue;
		}
		else{
			sentence.push_back(word);
		}
	}
	sort(sentence.begin(), sentence.end(), compareLex);
	cout<<"Output"<<endl;
	for(int i=0; i<sentence.size(); i++){
		cout<<sentence[i]<<endl;
	}
	return 0;
}