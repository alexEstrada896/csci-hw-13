/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
using namespace std;
#include <iostream>

//function prototypes for bubble sort and selection sort
void bubbleSort (int [], int, int&);
void selectionSort (int [], int,int&);

int main()
{
//reference variables to count the swaps in the functions
	int bubbleSwaps = 0;
	int selectionSwaps = 0;

//2 identical arrays
	int bubbleArray[20] = {14, 87,32, 56, 73, 45, 29, 90,63, 11,48, 25, 69, 34, 82, 57, 76, 21, 39, 68};
	int selectionArray [20] = {14, 87,32, 56, 73, 45, 29, 90,63, 11,48, 25, 69, 34, 82, 57, 76, 21, 39, 68};

//calling the functions
	bubbleSort(bubbleArray, 20,bubbleSwaps);
	selectionSort(selectionArray, 20, selectionSwaps);
//displays amount of swaps for each function
	cout <<"Bubble sort swaps: "<<bubbleSwaps<<endl;
	cout << "Selection sort swaps: "<<selectionSwaps<<endl;



	return 0;
}

//function for selection sort in decending order
void selectionSort (int array [], int size, int& scount)
{
	int startScan,maxIndex,maxValue;
	for (startScan = 0 ; startScan < (size - 1) ; startScan++)
	{
		maxIndex = startScan;
		maxValue = array [startScan];
		for (int index = (startScan + 1) ; index < size ; index++)
		{


			if (array [index] > maxValue)
			{
				maxValue = array[index];
				maxIndex = index;
			//incriments after a swap 	
				scount++;
			}
		}
		array [maxIndex] = array[startScan];
		array [startScan] = maxValue;
	}
}


// function for bubble sorting in acending order
void bubbleSort (int array[], int size,int& bcount)
{
	bool swap;
	int temp;

	do
	{
		swap = false;
		for (int count = 0; count < (size - 1) ; count++)
		{

			if (array [count] > array [count + 1])
			{
				temp = array[count];
				array [count] = array[count + 1];
				array [count + 1] = temp;
				swap = true;
			//incriments after a swap	
				bcount++;
			}
		}
	} while (swap);
}