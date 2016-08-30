#include<iostream>
using namespace std;

int BinarySearch(char arr[], int size, char key)
{
	int start, end, mid;
	start = 0;
	end = size - 1;
	int index = 0;
	while (index < size)
	{
		mid = (start + end) / 2;
		if (arr[mid] == key)
			return index;
		else if (arr[mid] < key)
		{
			start = mid + 1;
		}
		else if (arr[mid]>key)
		{
			end = mid - 1;
		}
		index++;
	}
	return -1;
}
 
void printList(char arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << endl;
	}
}
void main()
{
	char arr[10] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'T', 'Z' };
	printList(arr, 10);
	int x;
	x = BinarySearch(arr, 10, 'H');
	if (x == -1)
		cout << "sorry didnt find value" << endl;
	else
	{
		cout << "found at index " << x << endl;
	}
	system("pause");


}