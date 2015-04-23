#include<iostream>
#include<stdio.h>
#include<cstring>
#define fin (freopen("11743_in.txt", "r", stdin))
#define fout (freopen("11743_out.txt", "w", stdout))
using namespace std;
int main01(){
    int t;
    char c_n[20];
	scanf("%d%*c", &t);
    while(t--){
        gets(c_n);
        int len, sum=0, num=0, dnum=0;
         len=strlen(c_n);
        for(int i=0; i<len; i=i+2){
            if(c_n[i]==' ') i=i++;
            num=c_n[i]-48;
            dnum=2*num;
            int n1,n2;
            n1=dnum%10;
            n2=dnum/10;
            sum+=(n1+n2);
            
        }
        int num1, sum1=0;
         for(int i=1; i<len; i=i+2){
            if(c_n[i-1]==' ') i=i++;
            num1=c_n[i]-48;
            sum1+=num1;
        }
        int total=0;
        total=sum+sum1;
        if(total%10==0) cout<<"Valid";
        else cout<<"Invalid";
		if(t>0) cout<<endl;
        num=0;
        num1=0;
        sum=0;
        sum1=0;
        dnum=0;
    }
    return 0;
}
