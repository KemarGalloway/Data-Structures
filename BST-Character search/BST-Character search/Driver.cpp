#include<iostream>
using namespace std;
#include"Tree.h"

void main()
{
	char searchValue;
	bool search;
	Tree *t = new Tree();
	t->insertTreeNode('C');
	t->insertTreeNode('B');
	t->insertTreeNode('A');
	t->insertTreeNode('H');
	t->insertTreeNode('G');
	t->insertTreeNode('K');
	t->insertTreeNode('Z');
	t->insertTreeNode('Q');
	t->insertTreeNode('C');

	t->preOrderTraversal(t->getRoot());
	cout << endl;
	cout << endl;
	t->inOrderTraversal(t->getRoot());
	cout << endl;
	cout << endl;
	t->postOrderTraversal(t->getRoot());
	cout << endl;
	cout << endl;
	system("pause");

	cout<<"Number of nodes: "<< t->countNodes(t->getRoot())<<endl;
	cout << endl;
	cout << endl;
	
	cout << "Enter a letter to search for " << endl;
	cin >> searchValue;

	search = t->searchTree(t->getRoot(), searchValue);

	if (search==true)
	{
		cout << "Letter found" << endl;
	}
	else
	{
		cout << "Could not find letter"<<endl;
	}


}