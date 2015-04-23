#include<stdio.h>
struct node
{
   void * data; //Data to be held inside of node
   //In C, one would normally just place a type here.
   struct node * next; //Next element of data
};
int main(){
	struct node *list;
	list=NULL;
	struct node *tptr;
	struct node *nptr;
	nptr= new(node);
	nptr->data=10;
	nptr->next=NULL;
	if(list==NULL){
		list=nptr;
		tptr=nptr;	
	}
	else{
		tptr->next=nptr;
		tptr=nptr;	
	}
	return 0;
}
