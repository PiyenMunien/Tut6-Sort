#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

template < typename T > //Template to be used in sorting
T swap(int a, int b)
{
	T c;
	c = a;
	a = b;
	b = c;
}
template <class T>

void bubbleSort(T arrayT[], int arrLen) // the usual bubble sort method used
{
	for (int i = 0; i < arrLen - 1; i++)
	{
		for (int j = i; j < arrLen; j++)
		{
			if (arrayT[j] < arrayT[i])
			{
				swap(arrayT[j], arrayT[i]);
			}
		}
	}
}

template <class T>
int quickSort(T arrayT[], int lowest, int highest) // quicksort part
{
	return 0;
}

int main(int arga, char **argb)
{
	const int arrLen = 20;
	int intArray[arrLen] = {};
	srand(time(NULL));

	for (int i = 0; i < arrLen; i++) // Populating the required array
	{
		intArray[i] = rand() % 21;
	}
    std::cout << "Populated Random Array" << std::endl;
	
	for (int i = 0; i < arrLen; i++)
	{
		std::cout << intArray[i] << " , ";
	}
	std::cout << std::endl;

	bubbleSort(intArray, arrLen);
	std::cout << "New Sorted Array" << std::endl;
	
	for (int i = 0; i < arrLen; i++)
	{
		std::cout << intArray[i] << " , ";
	}
	std::cout << std::endl;

}