#include<stdio.h>
#include<string.h>
#include<math.h>
//using namespace std;
int prime(int n){
	
	if(n==1||n==2||n==3)
		return 1;
	if(n%2==0)
		return 0;

	int j, primel, fl=1;
	primel=(int)sqrt(n);

	for(j=3; j<=primel; j=j+2){
		if(n%j==0){
			fl=0;
			break;
		}
		else
			fl=1;
	}
	return fl;
}
int main(){
	int a[128], k, val=1, i=0, sum, l, fl;
	for(i='a'; i<='z'; i++)
		a[i]=val++;
	for(i='A'; i<='Z'; i++)
		a[i]=val++;

	char sent[100];
	freopen("word_prime_in.txt", "r", stdin);
	freopen("word_prime_out.txt", "w", stdout);
	while(1){
		sum=0;
		fl=0;
		scanf("%s", &sent);
		l=strlen(sent);
		for(k=0; k<l; k++){
			sum+=a[sent[k]];
		}
		fl=prime(sum);
		if(fl==1)
			printf("It is a prime word.\n");
		if(fl==0)
			printf("It is not a prime word.\n");
	}
	fclose(stdin);
	fclose(stdout);
		return 0;
}
