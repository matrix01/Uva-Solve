#include<iostream>
using namespace std;
int main()
{
    int a[10],i,n,j;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>j;
	int x;
	cin>>x;
    for(i=n;i>=j-1; i--)
    {
        a[i]=a[i-1];
		if(i==j-1){
			a[j-1]=x;
		}
    }
    for(i=0;i<n+1;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}

