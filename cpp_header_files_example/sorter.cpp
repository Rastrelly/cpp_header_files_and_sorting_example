#include "sorter.h"

//роздруковка масиву
void sorter::printArr(int size, int * arr)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << i + 1 << ") " << arr[i] << std::endl;
	}
}

//клонування масиву
void sorter::cloneArr(int size, int * origArr, int * &newArr)
{
	delete(newArr);
	newArr = new int[size];
	for (int i = 0; i < size; i++) newArr[i] = origArr[i];
}

//сортування бульбашкою
int sorter::BubbleSort(int size, int * data)
{

	int iterations = 0;

	if (size>1)
	while (true)
	{
		//повторюємо цикл, поки не буде досягнено
		//стан, коли не виконано жодної операції
		bool noops = true;
		for (int i = 0; i < (size-1); i++)
		{
			if (data[i] > data[i + 1])
			{
				noops = false;
				int buf = data[i + 1];
				data[i + 1] = data[i];
				data[i] = buf;
			}
			iterations++;
		}
		if (noops) break;
	}
	return iterations;
}

//сортування вибором
int sorter::SelectionSort(int size, int *data)
{

	int iterations = 0;

	for (int i = 0; i < size - 1; i++)
	{
		int min_index = i;
		for (int j = i + 1; j < size; j++)
		{
			iterations++;
			if (data[j] < data[min_index])
			{
				min_index = j;
			}
		}
		if (min_index != i)
		{
			int buf = data[i];
			data[i]= data[min_index];
			data[min_index] = buf;
		}
	}

	return iterations;

}

int sorter::GnomeSort(int size, int * data)
{
	int i = 0;
	int iterations = 0;

	while (i < size) {
		if ((i == 0) || (data[i - 1] <= data[i])) i++;
		else 
		{ 
			int buf = data[i]; 
			data[i] = data[i - 1]; 
			data[--i] = buf;
		}
		iterations++;
	}

	return iterations;
}
