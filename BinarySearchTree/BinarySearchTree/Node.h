#ifndef NODE_H
#define NODE_H
#include<iostream>
using namespace std;

class Node
{
private:
	int data;
	Node *leftSubTree;
	Node *rightSubTree;
public:
	Node()
	{
		data = 0;
		leftSubTree = NULL;
		rightSubTree = NULL;
	}
	Node(int D)
	{
		data = D;
		leftSubTree = NULL;
		rightSubTree = NULL;
	}

	void setData(int d)
	{
		data = d;
	}

	int getData()
	{
		return data;
	}

	void setLeftSubTree(Node *d)
	{
		leftSubTree = d;
	}

	Node *getLeftSubTree()
	{
		return leftSubTree;
	}

	void setRightSubTree(Node *d)
	{
		rightSubTree = d;
	}

	Node *getRightSubTree()
	{
		return rightSubTree;
	}
};

#endif
