#include<iostream>
#include"Tree.h"
using namespace std;


int main()
{
	int val;
	int cnt;
	int search;

	Tree *T = new Tree();
	T->insertNode(31);
	T->insertNode(68);
	T->insertNode(7);
	T->insertNode(21);
	T->insertNode(47);
	T->insertNode(25);
	T->insertNode(43);
	T->insertNode(5);
	T->insertNode(54);

	cout << endl;
	if (T->isTreeFull()==1)
	{
		cout << "Tree is full" << endl;
	}
	else
	{
		cout << "Tree is not full" << endl;
	}

	cout << endl;
	if (T->isTreeEmpty() == 0)
	{
		cout << "Tree is full" << endl;
	}
	else
	{
		cout << "Tree is not full" << endl;
	}

	cnt = T->countTree(T->getRoot());
	cout << "Number of nodes: " << cnt << endl;

	cout<<"Preorder traversal"<<endl;
	T->preOrderTraversal(T->getRoot());
	cout<<""<<endl;



	cout << "Enter a number a to search for" << endl;
	cin >> val;
	search = T->searchTree(T->getRoot(), val);
	if (search == true)
	{
		cout << "value found" << endl;
	}
	else
	{
		cout << "could not find value" << endl;
	}
	
	system("pause");
}