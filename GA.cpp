#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<cmath>
#include<cstdlib>
#include<algorithm>
using namespace std;

#define max 50
int fit[max], best=0;
double fi[max], sqf[max], avg;
int n, random[max/2]; string population[max];
void print(int i){
	printf("%5d             %d              %.0lf\n", i, best, avg);
}
void mutation(){
	for(int i=0; i<n; i++){
		int rnd = rand()%n;
	//	cout<<rnd<<endl;
		if(population[i][rnd]=='0') population[i][rnd]='1';
		else population[i][rnd]='0';
	//	cout<<population[i]<<endl;
	}
}
void cross_over(int a, int b, int rnd){
	string tmp = population[a];
	for(int i=random[rnd]; i<n; i++) population[a][i]=population[b][i];
//	cout<<population[a]<<endl;
	for(int i=a-1; i<n; i++) population[b][i]=tmp[i];
//	cout<<population[b]<<endl;
}
void cross_over_point(){
	sort(fit, fit+n);
	int rnd=0;
	for(int i=n-1; i>=0; i-=2){
		cross_over(i, i-1, rnd);
		rnd++;
	}
}

void gen_random(int t){
	for(int i=0;i<t/2; i++)
		random[i] = rand()%t;
}

double binarytoint(string s){
//	cout << s << endl;
	char * ppl = new char[s.length() + 1];
	ppl = strcpy(ppl, s.c_str());
//	cout << ppl << endl;
	char * end;
	long int value = strtol(ppl, &end, 2);
	return value;
}

void fitness(int t){
	 double total=0;
	//cout << t << endl;
	for (int i = 0; i < t; i++) {
		fi[i] = binarytoint(population[i]);
	//	cout <<i<<" " << fi[i] << endl;
		sqf[i] = pow(fi[i], 2);
		if(sqf[i]>best)best = sqf[i];
		total += sqf[i];
	}
	//cout << total << endl;
	avg = total / t;
	//cout << avg << endl;
	for (int i = 0; i < t; i++){
	//	cout<<sqf[i]<<" "<<avg<<endl;
		double x = sqf[i] / avg;
		
		fit[i] = round(x);
	//	cout << fit[i] << endl;	
	}
}

int main(){
	freopen("input.txt", "r", stdin);
	//freopen("output1.txt", "w", stdout);
	while (cin>>n){
		for (int i = 0; i < n; i++) cin>>population[i];
		
		printf("Generation       Best            Average\n"); 
  		printf("number           value           fitness\n\n");
		for(int i=0; i<10; i++){
			fitness(n);
			gen_random(n);
			cross_over_point();
			mutation();
			print(i+1);
		}
	}
	return 0;
}
