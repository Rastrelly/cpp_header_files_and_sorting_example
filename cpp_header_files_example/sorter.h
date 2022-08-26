#pragma once //директива примушує
//компілятор підключати модулі одноразово у випадку
//дублювання, як це і відбувається у нашому випадку

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