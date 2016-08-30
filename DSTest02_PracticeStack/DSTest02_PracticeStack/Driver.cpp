#include<iostream>
using namespace std;
#include"Stack.h"

void main()
{
	Stack *s = new Stack();
	int d;
	s->push(10);
	s->push(9);
	s->push(8);
	s->push(7);
	s->push(6);
	
	d = s->pop();
	cout << d;
	d = s->pop();
	cout << d;
	d = s->pop();
	cout << d;
	d = s->pop();
	cout << d;
	d = s->pop();
	cout << d;
	
	cout << "Number of elements in stack: " << s->countStack()<<endl;
	
	
	
	system("pause");
}