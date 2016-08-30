#ifndef TREE_H
#define TREE_H
#include<iostream>
using namespace std;
#include"Letter.h"

class Tree
{
private:
	Letter *root;
public:
	Tree()
	{
		root = NULL;
	}

	Letter *getRoot()
	{
		return root;
	}

	void preOrderTraversal(Letter *r)
	{
		if (r!=NULL)
		{
			cout << r->getLetter() << " " << endl;
			preOrderTraversal(r->getLeftSubTree());
			preOrderTraversal(r->getRightSubTree());

		}
	}

	void inOrderTraversal(Letter *r)
	{
		if (r != NULL)
		{
			
			preOrderTraversal(r->getLeftSubTree());
			cout << r->getLetter() << " " << endl;
			preOrderTraversal(r->getRightSubTree());

		}
	}

	void postOrderTraversal(Letter *r)
	{
		if (r != NULL)
		{
			preOrderTraversal(r->getLeftSubTree());
			preOrderTraversal(r->getRightSubTree());
			cout << r->getLetter() << " " << endl;

		}
	}
	void insertTreeNode(char ch)
	{
		Letter *N = new Letter(ch);
		Letter *T;
		if (N!=NULL)
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
					if (N->getLetter() < T->getLetter())
					{
						if (T->getLeftSubTree()==NULL)
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
			cout << "ERROR" << endl;
		}
	}

	int countNodes(Letter *r)
	{
		int count = 1;
		if (r==NULL)
		{
			return 0;
		}
		else
		{
			count += countNodes(r->getLeftSubTree());
			count += countNodes(r->getRightSubTree());
			return count;
		}
	}

	bool searchTree(Letter *r, char key)
	{
		if (r==NULL)
		{
			return false;
		}
		else if (key == r->getLetter())
		{
			return true;
		}
		else if (key < r->getLetter())
		{
			searchTree(r->getLeftSubTree(), key);
		}
		else if (key > r->getLetter())
		{
			searchTree(r->getRightSubTree(), key);

		}
		
	}
	
};

#endif