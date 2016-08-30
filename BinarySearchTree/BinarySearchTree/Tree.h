#ifndef TREE_H
#define TRRE_H
#include<iostream>
#include"Node.h"
using namespace std;
class Tree
{
private:
	Node *root;
public:
	Tree()
	{
		root = NULL;
	}
	Node *getRoot()
	{
		return root;
	}
	/*Traverses a Binary Tree [PREORDER]*/
	void preOrderTraversal(Node *R)
	{
		if (R != NULL)
		{
			cout<< R->getData()<< "" <<endl;
			preOrderTraversal(R->getLeftSubTree());
			preOrderTraversal(R->getRightSubTree());
		}
	}
	/*Traverses a Binary Tree [INORDER]*/
	void inOrderTraversal(Node *R)
	{
		if (R != NULL)
		{
			
			inOrderTraversal(R->getLeftSubTree());
			cout << R->getData() << "" << endl;
			inOrderTraversal(R->getRightSubTree());
		}
	}
	/*Traverses a Binary Tree [POSTORDER]*/
	void postOrderTraversal(Node *R)
	{
		if (R != NULL)
		{
			postOrderTraversal(R->getLeftSubTree());
			postOrderTraversal(R->getRightSubTree());
			cout << R->getData() << "" << endl;
		}
	}
	/*inserts nodes into a Binary Tree*/
	void insertNode(int D)
	{
		Node *N = new Node(D);
		Node *T;
		if (N != NULL)
		{
			if (root == NULL)
			{
				root = N;
			}
			else
			{
				T = root;
				while (true)
				{
					if (N->getData() < T->getData())
					{
						if (T->getLeftSubTree() == NULL)
						{
							T->setLeftSubTree(N);
							break;
						}
						else
						{
							T = T->getLeftSubTree();
						}
					}
					else
					{
						if (T->getRightSubTree() == NULL)
						{
							T->setRightSubTree(N);
							break;
						}
						else
						{
							T = T->getRightSubTree();
						}
					}
				}
			}
		}
		else
		{
			cout<<"Error..out of memory cannot add new node";
		}
	}
	/*checks to see if a tree is full*/
	bool isTreeFull()
	{
		Node *temp = new Node();
		if (temp!=NULL)
		{
			delete temp;
			return false;
		}
		else
		{
			return true;
		}
	}
	/*checks to see if a tree is empty*/
	bool isTreeEmpty()
	{
		if (root==NULL)
		{
			return true;
		}
		return false;
	}

	/*Searches a tree to determine if a specific node exits*/
	bool searchTree(Node *root, int key)
	{
		if (root == NULL)
		{
			return false;
		}
		else if (key == root->getData())
			return true;
		else if (key < root->getData())
		{
			searchTree(root->getLeftSubTree(), key);
		}
		else if (key>root->getData())
		{
			searchTree(root->getRightSubTree(), key);
		}
	}

	/*Counts the number of nodes in a tree*/
	int countTree(Node *R) 
	{
		int count = 1;
		if (R == NULL)
		{
			return 0;
		}
		else
		{
			
			count+=countTree(R->getLeftSubTree());
			count += countTree(R->getRightSubTree());
			return count;
		}
	}


};
#endif