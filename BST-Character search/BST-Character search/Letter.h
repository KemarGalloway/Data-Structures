#ifndef LETTER_H
#define LETTER_H
#include<iostream>
using namespace std;
class Letter
{
private:
	char let;
	Letter *leftSubTree;
	Letter *rightSubTree;

public:
	Letter()
	{
		let = ' ';
		leftSubTree = NULL;
		rightSubTree = NULL;
	}

	Letter(char ch)
	{
		let = ch;
		leftSubTree = NULL;
		rightSubTree = NULL;
	}
	
	void setLetter(char l)
	{
		let = l;
	}

	char getLetter()
	{
		return let;
	}

	void setLeftSubTree(Letter *p)
	{
		leftSubTree = p;
	}

	Letter *getLeftSubTree()
	{
		return leftSubTree;
	}

	void setRightSubTree(Letter *p)
	{
		rightSubTree = p;
	}

	Letter *getRightSubTree()
	{
		return rightSubTree;
	}
};

#endif