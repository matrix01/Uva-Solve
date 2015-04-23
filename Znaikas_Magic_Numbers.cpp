#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
using namespace std;

int main(){
	int inp;
	int arr[100005]={0};
	for(int i=1; i<100001; i++){
		int tmp =i;
		int ts =0;
		while(tmp!=0){
			ts+=(tmp%10);
			tmp/=10;
		}
		arr[i]=ts;
	}
//	for(int i=0; i<20; i++) cout<<arr[i]<<" ";
//	cout<<endl;
	while(cin>>inp){
		int res[100000];
		int sum =0, i=99999;
		int count =0;
		while(sum<=inp){
			if(sum==inp)break;
			if(sum+arr[i]<=inp){
				sum+=arr[i];
				res[count++]=i;
			}
			i--;
		}
		printf("%d\n", count);
		printf("%d", res[0]);
		for(i=1; i<count; i++) printf(" %d", res[i]);
		printf("\n");
	}
	return 0;
}
