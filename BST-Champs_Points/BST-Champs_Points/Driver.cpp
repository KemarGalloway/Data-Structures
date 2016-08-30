#include<iostream>
using namespace std;
#include"Tree.h"
#include"School.h"

int main()
{
	School s;
	Tree *t = new Tree();
	t->insertSchoolPoints("Morant Bay High", 400.12);
	t->insertSchoolPoints("Montego Bay High", 300.12);
	t->insertSchoolPoints("Ardene High", 200.12);
	t->insertSchoolPoints("St. Jago High", 100.12);
	t->insertSchoolPoints("Seaforth High", 90.12);

	t->preOrderTraversal(t->getRoot());
	cout << endl;
	cout << endl;
	t->inOrderTraversal(t->getRoot());
	cout << endl;
	cout << endl;
	t->postOrderTraversal(t->getRoot());
	cout << endl;
	cout << endl;

	cout << " > Number of nodes: " << t->countTreeNodes(t->getRoot())<<endl;

	cout << endl;
	cout << endl;

	int srch;
	double pnt;
	cout << "Enter point to search for " << endl;
	cin >> pnt;
	srch = t->searchTree(t->getRoot(), pnt);
	if (srch == 1)
	{
		cout << "Found"<<endl;
		cout << "School: " << s.getSchool()<< endl;
	}
	else
	{
		cout << "Not found" << endl;
	}



	system("pause");
}