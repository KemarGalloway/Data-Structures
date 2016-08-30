#include<iostream>
using namespace std;
//-------------------------------- Big O --> O(f(n))-----------[2]-------[][][]
void displayVal(int H[],int size)
{
	for (int i = 0; i < size; i++)
	{
		H[i];
		cout << H[i]<<" ";
	}
}
//-------------------------------- Big O --> O(f(n))-----------[2]-------[][][]
int linearSearch(int array[], int size, int key)
{
	int index = 0;
	while (index < size)
	{
		if (array[index] == key)
		{
			return index;
		}
		else
			index++;

	}
	return -1;
}
//------------------------------ Big O --> O(f(log n))-----------[2]-------[][][]
int binarySearch(int array[], int size, int key)
{
	int start, end, mid;
	start = 0;
	end = size - 1;
	while (start <= end)
	{
		mid = ((start + end) / 2);
		if (key == array[mid])
			return mid;
		else if (key < array[mid])
			end = mid - 1;
		else if (key > array[mid])
			start = mid + 1;
	}
	return -1;
}

//-------------------------------- Big O --> O(f(1))-----------[2]-------[][][]
int HashSearch(int size, int key)
{
	int hashKey;
	hashKey = key%size;
	if (hashKey  >= 0 && hashKey < size)
		return hashKey;
	else
		return -1;
}
//-------------------------------- Big O --> O(f(n^2))-----------[2]-------[][][]
void insertionSort(int array[], int size)
{
	int index, count2, temp;
	index = 1;
	while (index < size)
	{
		temp = array[index];
		count2 = index;
		while (count2 >0 && temp<array[count2-1])
		{
			array[count2] = array[count2 - 1];
			count2--;
		}
		array[count2] = temp;
		
		index++;
	}
	
}
//-------------------------------- Big O --> O(f(n^2))-----------[2]-------[][][]
void selectionSort(int array[], int size)
{
	int index, count2, indexSmallest, temp;
	index = 0;
	while (index < size)
	{
		indexSmallest = index;
		count2 = index + 1;
		while (count2 < size)
		{
			if (array[count2] < array[indexSmallest])
			{
				indexSmallest = count2;
			}
			count2++;
		}
		temp = array[index];
		array[index] = array[indexSmallest];
		array[indexSmallest] = temp;
		index++;
	}
}
//-------------------------------- Big O --> O(f(n^2))-----------[2]-------[][][]
void bubbleSort(int array[], int size)
{
	int index, temp, count2, swapMade;
	index = 0;
	swapMade = 1;
	while (index < size && swapMade == 1)
	{
		swapMade = 0;
		count2 = size - 1;
		while (count2 > index)
		{
			if (array[count2] < array[count2 - 1])
			{
				temp = array[count2 - 1];
				array[count2 - 1] = array[count2];
				array[count2] = temp;
				swapMade = 1;
			}
			count2--;
		}
		index++;
	}
}
//-------------------------------- Big O --> O(f(n log n))-----------[2]-------[][][]
void quickSort(int arr[], int left, int right)
{
	int temp, low, high, pivot, pivot_element;
	low = left;
	high = right;
	pivot = (left + right) / 2;
	pivot_element = arr[pivot];
	while (low <= high)
	{
		while (arr[low] < pivot_element)
			low++;
		while (arr[high] > pivot_element)
			high--;
		if (low <= high)
		{
			temp = arr[low];
			arr[low] = arr[high];
			low++;
			high--;
		}
	}
	if (left < high)
		quickSort(arr, left, high);
	else if (low < right)
	quickSort(arr, low, right);
}

void main()
{
	int A[5] = { 23, 12, 7, 45, 6 };
	int B[10] = {2,4,1,9,78,26,67,33,12,6};
	int C[15] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
	int D[20] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 190, 200 };
	int E[25];
	displayVal(E, 0);
	int holderLinear;
	int holderBin;
	int holderHash;
	holderLinear = linearSearch(A, 5, 7);
		if (holderLinear == -1)
		cout << "the value was not found, sorry" << endl;
		else
		cout << "The value is found at position " << holderLinear << endl;
	//insertionSort(A,5);
		//selectionSort(A, 5);
		//bubbleSort(A, 5);
		quickSort(A, 0, 5 - 1); 
		displayVal(A, 5);
		holderBin = binarySearch(A, 5, 12);
		if (holderBin == -1)
		cout << "the value was not found, sorry" << endl;
		else
		cout << "The value is found at position " << holderBin << endl;

	//holderHash = HashSearch(20, 50);
	//	cout << "The value is found at position " << holderHash << endl;
	//	system("pause");
//------------------------|||||||||||||||||||||||||||||--------SORT ALGORITHMS-----------[4]
		system("pause");
}