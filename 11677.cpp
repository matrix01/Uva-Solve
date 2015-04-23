#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
	 int a,c,b,d,h,m,t_time;

    while (scanf("%d%d%d%d",&a,&b,&c,&d)==4){
      if(a==0 && c==0 && b==0 && d==0)
      break;
     if(a==0)
          a=24;
          if(c==0)
          c=24;

      if(b>d)
      {
          d=d+60;
          m=d-b;

          if(a+1>c)
          c=c+24;
          h=c-(a+1);
          }

          else
          {

               if(a>c)
              c=c+24;
              m=d-b;              
              h=c-a;              
              }

        t_time=h*60+m;
        cout<<t_time<<endl;
	}
	return 0;
}