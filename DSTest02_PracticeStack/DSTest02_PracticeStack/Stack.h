#ifndef STACK_H
#define STACK_H
#include"Node.h"
class Stack
{
private:
	Node *top;
	int count;
public:
	Stack()
	{
		top = NULL;
		count = 0;
	}

	void push(int D)
	{
		Node *t = new Node();
		if (t!=NULL)
		{
			t->setData(D);
			t->setNextNode(NULL);
			if (top==NULL)
			{
				top = t;
			}
			else
			{
				t->setNextNode(top);
				top = t;

			}
			count++;
		}
		else
		{
			cout << "Error";
		}
	}

	bool isStackEmpty()
	{
		if (top==NULL)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	bool isStackFull()
	{
		Node *t = new Node();
		if (t!=NULL)
		{
			delete t;
			return false;
		}
		else
		{
			return true;
		}
	}

	int pop()
	{
		Node *t;
		int data;
		if (!isStackEmpty())
		{
			t = top;
			top = top->getNextNode();
			data = t->getData();
			delete t;
			return data;
		}
		else
		{
			cout << "cant't pop from emty stack";
		}
	}
	int countStack()
	{
		return count;
	}

	Node *createStack()
	{
		Node *t = new Node();
		t = NULL;
		return t;
	}
	/*
	int stackCount()
	{
		Node *tempTop = new Node();
		int data, count;
		count = 0;
		tempTop = createStack();
		while (!isStackEmpty())
		{
			data = pop();
			push(data);
			count++;
		}
		while (!isStackEmpty())
		{
			data = pop();
		}

	}
	*/
	

};

#endif