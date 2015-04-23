#include<stdio.h>
#include<cstring>
#define fin (freopen("10424_in.txt","r",stdin))
#define fout (freopen("10424_out.txt","w",stdout))
int main(){
	int ch[128];
	char name1[30], name2[30];
	while(gets(name1)){
		gets(name2);
		int l1, l2, s=0, s1=0;
		l1=strlen(name1);
		l2=strlen(name2);
		for(int i=0; i<l1; i++)
			if((name1[i]>='A'&&name1[i]<='Z'))
				s+=name1[i]-64;
			else if((name1[i]>='a'&&name1[i]<='z'))
				s+=name1[i]-96;

		for(int i=0; i<l2; i++)
			if((name2[i]>='A'&&name2[i]<='Z'))
				s1+=name2[i]-64;
			else if(name2[i]>='a'&&name2[i]<='z')
				s1+=name2[i]-96;
		int total=0;
		while(s!=0){
			total+=s%10;
			s=s/10;
			if(total>9){
				s=total;
				total=0;
			}
		}
		if(s==0 && total==0) total=9;
		int total1=0;
		while(s1!=0){
			total1+=s1%10;
			s1=s1/10;
			if(total1>9){
				s1=total1;
				total1=0;
			}
		}
		if(s1==0 && total1==0) total1=9;
		double t, t1;
		t=total*1.00;
		t1=total1*1.00;
		double percent;
		if(total>total1)
			percent=(t1/t)*100.00;
		else
			percent=(t/t1)*100.00;
		printf("%.2lf %%\n", percent);
	}
	return 0;
}
