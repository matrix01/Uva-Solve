#include "iostream"
#include <stdlib.h>
#include <string.h>
using namespace std; 
#define SIZE 100

void reset(char temp[]) //clears the array
{
	for (int i=0;i <= strlen(temp);i++)
		temp[i] = 0;
}

void lcs(char str1[], char str2[], char temp[], int x, int y, int i)
{
	if (str1[x]==0)//end of string exit
		return;
	else
	{
		if (str1[x]==str2[y])//finds similar cells
		{
			temp[i]=str1[x];//copy to temp
			if ((str1[x+1]!=0) && (str2[y+1]!=0))//checks that this is not the end of the strings and send 
				return lcs (str1, str2, temp,x+1 ,y+1 , i+1);//the next cell to compare
		}
		else//the x&y are not the same
			if (str2[y] == 0)//if the program finished going on the second string it reset the counter using 
				return lcs (str1, str2, temp,x+1 ,strlen(temp), i+1);//temp and return the next cell from str1
			if (str2[y+1] != 0)//compare x from str1 to y+1 from str2
				return lcs (str1, str2, temp, x, y + 1, i);
			if (str1[x] == 0)//compare x+1 from str1 to y from str2
				return	lcs (str1, str2, temp, strlen(temp), y, i);
	}
}
void main()
{
	char str1[SIZE]={0},str2[SIZE]={0},temp[SIZE]={0}, big[SIZE] = {0};//, biggest2[SIZE] = {0};
	cout<<"Please enter the first string:";
	cin>>str1;
	cout<<"Please enter the second string:";
	cin>>str2;
	lcs(str1, str2, temp, 0, 0, 0);
	strcpy(big,temp);
	reset(temp);
	lcs(str2, str1, temp, 0, 0, 0);
	cout<<"The longest common string is:";
	if ((strlen(big)) > (strlen(temp)))
		cout<<big<<endl;
	else
		cout<<temp;
}