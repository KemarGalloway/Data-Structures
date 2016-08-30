#ifndef NODE_H
#define NODE_H 
#include<iostream>
using namespace std;
class Node
{
private:
	int Data;
	Node *NextNode;

public:
	Node()
	{
		Data = 0;
		NextNode = NULL;

	}
	void setData(int x)
	{
		Data = x;
	}
	int GetData()
	{
		return Data;
	}
	void setNextNode(Node *p)
	{
		NextNode = p;
	}
	Node *GetnextNode()
	{
		return NextNode;
	}

};
#endif