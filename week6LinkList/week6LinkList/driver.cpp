#include<iostream>
using namespace std;
#include "LinkedList.h"
#include "Node.h"

void main()
{
	int countVar=0;
	LinkedList *List = new LinkedList();
	List->InsertAtFront(23);
	List->InsertAtFront(18);
	List->InsertAtFront(17);
	List->InsertAtFront(10);

	List->displayAtFront();
	
	cout << "Number of nodes are: " << List->countNodes(countVar) << endl;

	cout << "Is the list full?  " << List->checkIfListFull()  << endl;
	cout << "Is the list empty? " << List->checkIfListEmpty() << endl;
	system("pause");

	LinkedList *List2 = new LinkedList();
	List2->InsertAtBack(40);
	List2->InsertAtBack(45);
	List2->InsertAtBack(50);
	List2->InsertAtBack(55);

	List2->displayAtBack();
	system("pause");
}