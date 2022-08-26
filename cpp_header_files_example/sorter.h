#pragma once 

#include <iostream>

class sorter
{
private:

public:
	void printArr(int size, int * arr);
	void cloneArr(int size, int * origArr, int * &newArr);
	int BubbleSort(int size, int * data);
	int SelectionSort(int size, int *data);
	int GnomeSort(int size, int * data);
};