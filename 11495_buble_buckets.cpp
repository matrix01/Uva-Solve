#include<iostream>
using namespace std;
#define MAX 1000000
int arr[MAX], s=0;
int arr1[MAX], arr2[MAX];
int marge_sort(int low, int high);
int marge(int l, int m, int h);
int main(){
	int n;
	while(cin>>n){
		if(!n)break;
		for(int i=0; i<n; i++)
			cin>>arr[i];
		s=0;
		marge_sort(0, n-1);
		/*if(s%2) cout<<"Marcelo"<<endl;
		else cout<<"Carlos"<<endl;*/
		cout<<s<<endl;
	}
	return 0;
}
int marge_sort(int low, int high){
	int mid;
	if(low<high){
		mid=(low+high)/2;
		marge_sort(low, mid);
		marge_sort(mid+1, high);
		marge(low, mid, high);
	}
	return 0;
}
int marge(int l, int m, int h){
	int n1, n2, i, j, k;
	n1=m-l+1;
	n2=h-m; 
	for(i=0; i<n1; i++)
		arr1[i]=arr[l+i];
	for(j=0; j<n2; j++)
		arr2[j]=arr[m+j+1];

	arr1[i]=2147483647;
	arr2[j]=2147483647;
	i=0; j=0;
	for(k=l; k<=h; k++){
		if(arr1[i]<=arr2[j])
			arr[k]=arr1[i++];
		else{
			arr[k]=arr2[j++];
			s+=n1-i;
		}
	}
	return 0;
}