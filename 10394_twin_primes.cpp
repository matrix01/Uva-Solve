#include<iostream>
#include<cmath>
using namespace std;

bool isPrime (int num)
{
    if (num <=1)
        return false;
    else if (num == 2)         
        return true;
    else if (num % 2 == 0)
        return false;
    else
    {
        bool prime = true;
        int divisor = 3;
        double num_d = static_cast<double>(num);
        int upperLimit = static_cast<int>(sqrt(num_d) +1);
        
        while (divisor <= upperLimit)
        {
            if (num % divisor == 0)
                prime = false;
            divisor +=2;
        }
        return prime;
    }
}
int main01(){
	int prme[1000000], pindex=0;
	for(int i=3; i<200000; i++){
		bool flag=isPrime(i);
		if(flag==true) prme[pindex++]=i;
	}
	for(int i=0; i<pindex; i++) cout<<prme[i]<<" ";
	cout<<endl;
	return 0;
}