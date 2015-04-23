#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<list>
#include<map>
#include<vector>
#include<queue>
#include<cstdio>
using namespace std;
int main(){
	map<int, int>m;
	queue<int> q;
	int x;
	while (scanf("%d", &x)!=EOF){
		if (m[x] == 0){
			q.push(x);
			m[x] = m[x] + 1;
		}
		else
			m[x] = m[x] + 1;
	}
	while (!q.empty()){
		cout << q.front() << " " << m[q.front()] << endl;
		q.pop();
	}

	return 0;
}