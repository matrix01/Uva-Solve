#include<iostream>
#include<stdio.h>
#define MAX 1000002
using namespace std;
long long arr[MAX], s;
int arr1[MAX], arr2[MAX];
void marge(int arr[], long l, long m, long h){
	long n1, n2, i, j, k;
	n1=m-l+1;
	n2=h-m; 
	for(i=0; i<n1; i++)
		arr1[i]=arr[l+i];
	for(j=0; j<n2; j++)
		arr2[j]=arr[m+j+1];
	arr1[i]=10000000;
	arr2[j]=10000000;
	i=0; j=0;	
	for(k=l; k<=h; k++){
		if(arr1[i]<=arr2[j]){
			arr[k]=arr1[i++];
		}
		else{
			arr[k]=arr2[j++];
			s+=n1-i;
		}
	}
}
void marge_sort(int arr[], long low, long high){
	long mid;
	if(low<high){
		mid=(low+high)/2;
		marge_sort(arr, low, mid);
		marge_sort(arr, mid+1, high);
		marge(arr, low, mid, high);
	}
}
int main(){
	long n;
	while(cin>>n){
		for(long i=0; i<n; i++)
			cin>>arr[i];
		s=0;
		marge_sort(arr, 0, n-1);
		cout<<s<<endl;
	}
	return 0;
}
