#ifndef SCHOOL_H
#define SCHOOL_H
#include<iostream>
#include<string>
using namespace std;

class School
{

private:
	string name;
	double points;
	School *leftSubTree;
	School *rightSubTree;
public:
	School()
	{
		name = "";
		points = 0.0;
		leftSubTree = NULL;
		rightSubTree = NULL;
	}

	School(string nm, double q)
	{
		name = nm;
		points = q;
		leftSubTree = NULL;
		rightSubTree = NULL;
	}

	School(const School &obj)
	{
		name = obj.name;
		points = obj.points;
		leftSubTree = obj.leftSubTree;
		rightSubTree = obj.rightSubTree;
	}

	void setSchool(string skl)
	{
		name = skl;
	}

	string getSchool()
	{
		return name;
	}

	void setPoints(double pnt)
	{
		points = pnt;
	}

	double getPoints()
	{
		return points;
	}

	void setLeftSubTree(School *p)
	{
		leftSubTree = p;
	}
	
	School *getLeftSubTree()
	{
		return leftSubTree;
	}

	void setRightSubTree(School *s)
	{
		rightSubTree = s;
	}

	School *getRightSubTree()
	{
		return rightSubTree;
	}
};
#endif