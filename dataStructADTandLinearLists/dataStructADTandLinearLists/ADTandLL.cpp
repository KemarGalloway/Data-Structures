#include<iostream>
using namespace std;
//--------------------------------------Efficiency---> O(n)-----------[linear]
void intializeArray(int a[], int size)
{	
	int i;
	for (i = 0; i < size; i++)
	{
		a[i] = i;
		cout << a[i]<<endl;
		
	}
}
//--------------------------------------Efficiency---> O(n)-----------[linear]
void displayArray(int a[], int size)
{

	int i;
	for (i = 0; i < size; i++)
	{
		cout << a[i]<<endl;

	}

}
//--------------------------------------Efficiency---> O(n)-----------[linear]
void addArray(int a[], int b[], int c[], int size)
{
	int i, j, k;
	int sum=0;
	for (i = 0, j=0; i < size, j<size; i++, j++)
	{
		k = 0;
		a[i] = i;
		cout << "number= " << a[i] << endl;

		b[j] = j;
		cout << "number= " << b[j] << endl;

		sum = a[i] + b[j];
		cout << "sum=" << sum << endl;
		c[k] = sum;
		cout << ">>>>>>>>>> TOTAL= " << c[k] << " <<<<<<<<<<<<<<" << endl;
	}
	
}

void main()
{
/*	int arr[5];
	int B[5] = { 10, 20, 30, 40, 50 };
	cout << "Address: " <<&B[0] << endl;
	cout << B << endl;
	cout << "Address" << &B[3] << endl;*///previous activity

	int x[5];
	int y[5];
	int z[5];
	//intializeArray(x,5);
	//displayArray(x, 5);
	addArray(x, y, z, 5);
	system("pause");
}