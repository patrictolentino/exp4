#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
	int size, arr[100], i, j, temp;
	
	cout << "Enter the array size: ";
	cin >> size;
	cout << "Enter the " << size << " elements: \n";
		
	for(i=0; i < size; i++)
	{
		cin >> arr[i];
	}
	
	cout << "\nYour data: ";
	
	for(i=0; i < size; i++)
	{
	cout << arr[i] << " ";
	}
	
	cout << "\n\nAfter using bubble sort...\n";
	
	for(i=0; i < size; i++)
	{
		for(j = i + 1; j < size; j++)
		{
			if(arr[i] > arr[j])
			{	
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp; 
			}
		}
	}
	
	cout << "\nSorted Data: ";
	
	for(i=0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	
	
	getch();
	return 0;
}
