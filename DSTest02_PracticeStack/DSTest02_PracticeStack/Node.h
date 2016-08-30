#ifndef NODE_H
#define NODE_H
#include<iostream>
using namespace std;

class Node
{
private:
	int data;
	Node *nextNode;
public:
	Node()
	{
		data = 0;
		nextNode = NULL;
	}
	
	void setData(int d)
	{
		data = d;
	}

	int getData()
	{
		return data;
	}

	void setNextNode(Node *p)
	{
		nextNode = p;
	}

	Node *getNextNode()
	{
		return nextNode;
	}

};

#endif