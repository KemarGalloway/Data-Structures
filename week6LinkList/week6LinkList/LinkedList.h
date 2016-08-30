#ifndef LINKEDLIST_H
#define LINKEDLIST_H 
#include"Node.h"
#include<iostream>
using namespace std;

class LinkedList
{
private:
	Node *Head;
public:
	LinkedList()
	{
		Head = NULL;
	}
	void InsertAtFront(int D)
	{
		Node *Temp = new Node();
		if (Temp != NULL)
		{
			Temp->setData(D);
			Temp->setNextNode(NULL);
			if (Head == NULL)
			{
				Head = Temp;
			}
			else
			{
				Temp->setNextNode(Head);
				Head = Temp;
			}
		}
		else
		{
			cout << "Out of memory, unable to insert node" << endl;
		}
	}

	void displayAtFront()
	{
		Node *ptr;
		ptr = Head;

		while (ptr!=NULL)
		{
			cout << ptr->GetData()<<endl;
			ptr = ptr->GetnextNode();
		}
	}

	void InsertAtBack(int data)
	{
		Node * T2;
		Node * T = new Node;
		if (T != NULL)
		{
			T->setData(data);
			T->setNextNode(NULL);
			if (Head == NULL)
			{
				Head = T;
			}
			else
			{
				T2 = Head;
				while (T2->GetnextNode() != NULL)
				{
					T2 = T2->GetnextNode();
				}
				T2->setNextNode(T);
			}
		}
		else
		{
			cout << "Error!...could not insert node" << endl;
		}
	}

	void displayAtBack()
	{
		Node *ptr;
		ptr = Head;
		while (ptr!=NULL)
		{
			cout << ptr->GetData() << endl;
			ptr = ptr->GetnextNode();
		}
	}

	bool searchForNode(int key)
	{
		Node *temp;
		temp = Head;
		while (temp != NULL)
		{
			if (temp->GetData() == key)
				return true;
			else
			{
				temp = temp->GetnextNode();
			}
		}
		return false;
	}

	int countNodes(int count)
	{
		Node *temp;
		temp = Head;
		count = 0;
		while (temp != NULL)
		{
			count++;
			temp = temp->GetnextNode();
		}
		return count;
	}

	bool checkIfListFull()
	{
		Node *temp=new Node();
		if (temp == NULL)
		{
			delete temp;
			return false;
		}
		else
		{
			return true;
		}

	}

	bool checkIfListEmpty()
	{
		
		if (Head == NULL)
		{
			return true;
		}
		else
		{
			return false;
		}

	}


};
#endif