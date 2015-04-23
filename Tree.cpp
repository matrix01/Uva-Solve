#include<iostream>
using namespace std;
typedef struct TreeLinkedList{
	int data;
	TreeLinkedList *leftptr;
	TreeLinkedList *rightptr;
}*Tree;
Tree root = NULL;
Tree insertChild(Tree, Tree);
void addChild(int val){
	Tree newNode, tmpNode;
	newNode = new TreeLinkedList;
	newNode->data = val;
	newNode->leftptr = NULL;
	newNode->rightptr = NULL;
	if (root == NULL){
		root = newNode;
	}
	else{
		tmpNode = insertChild(root, newNode);
	}
}
Tree insertChild(Tree tmpRoot, Tree tmpNode){
	if (tmpNode->data < tmpRoot->data){
		if (tmpRoot->leftptr != NULL){
			insertChild(tmpRoot->leftptr, tmpNode);
		}
		else{
			tmpRoot->leftptr = new TreeLinkedList;
			tmpRoot->leftptr = tmpNode;
		}
	}
	else{
		if (tmpRoot->rightptr != NULL){
			insertChild(tmpRoot->rightptr, tmpNode);
		}
		else{
			tmpRoot->rightptr = new TreeLinkedList;
			tmpRoot->rightptr = tmpNode;
		}
	}
	return tmpRoot;
}
void inorderTraversal(Tree tmpRoot){
	if (tmpRoot != NULL){
		inorderTraversal(tmpRoot->leftptr);
		cout << tmpRoot->data << "-->";
		inorderTraversal(tmpRoot->rightptr);
	}
}
int main(){
	int x, n;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> x;
		addChild(x);
	}
	inorderTraversal(root);
	return 0;
}