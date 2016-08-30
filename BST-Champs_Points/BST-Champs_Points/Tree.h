#ifndef TREE_H
#define TREE_H
#include"School.h"
class Tree
{
private:
	School *Root;

public:
	Tree()
	{
		Root = NULL;
	}

	School *getRoot()
	{
		return Root;
	}

	void insertSchoolPoints(string nm, double pnt)
	{
		School *N = new School(nm,pnt);
		School *T;
		if (N!=NULL)
		{
			if (Root == NULL)
			{
				Root = N;
			}
			else
			{
				T = Root;
				while (true)
				{
					if (N->getPoints() < T->getPoints())
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
			cout << "Error...could not create Node";
		}
	}

	void preOrderTraversal(School *r)
	{
		if (r!=NULL)
		{
			cout << r->getPoints() << " ";
			cout << r->getSchool() << " "<<endl;
			preOrderTraversal(r->getLeftSubTree());
			preOrderTraversal(r->getRightSubTree());
		}
	}
	void inOrderTraversal(School *r)
	{
		if (r != NULL)
		{
			preOrderTraversal(r->getLeftSubTree());
			cout << r->getPoints() << " ";
			cout << r->getSchool() << " "<<endl;
			preOrderTraversal(r->getRightSubTree());
		}
	}
	void postOrderTraversal(School *r)
	{
		if (r != NULL)
		{		
			preOrderTraversal(r->getLeftSubTree());
			preOrderTraversal(r->getRightSubTree());
			cout << r->getPoints() << " ";
			cout << r->getSchool() << " "<<endl;
		}
	}

	bool isTreeEmpty()
	{
		if (Root==NULL)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	bool isTreeFull()
	{
		School *t = new School();
		if (t!=NULL)
		{
			delete t;
			return false;
		}
		return true;
	}

	int countTreeNodes(School *r)
	{
		int count = 1;
		if (r==NULL)
		{
			return 0;
		}
		else
		{
			count += countTreeNodes(r->getLeftSubTree());
			count += countTreeNodes(r->getRightSubTree());
			return count;
		}
	}

	bool searchTree(School *r, double key)
	{
		if (r == NULL)
		{
			return false;
		}
			if (key == r->getPoints())
			{
				return true;
			}
			else if ( key < r->getPoints())
			{
				searchTree(r->getLeftSubTree(), key);
			}
			else if (key > r->getPoints())
			{
				searchTree(r->getRightSubTree(), key);
			}		
	}

};
#endif