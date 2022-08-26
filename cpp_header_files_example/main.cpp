#include <iostream>
#include <ctime>
#include "sorter.h"

using namespace std;

int * numarr;
int * numarr_base;

int arrSize=50;

int main()
{

	srand(time(NULL)); //активуємо ГВЧ з випадклвим сім'ям

	numarr_base = new int[arrSize]; //готуємо масив до заповнення

	//заповнюємо масив випадковими числами від 0 до 99
	for (int i = 0; i < arrSize; i++)
	{
		int cn = rand() % 100;
		cout << i + 1 << ") " << cn << endl;
		numarr_base[i] = cn;
	}

	//створюємо об'єкт-сортувальник
	sorter objSorter; 

	

	//виконуємо сортування
	//1 - бульбашкою
	objSorter.cloneArr(arrSize, numarr_base, numarr);
	int bn = objSorter.BubbleSort(arrSize, numarr);
	objSorter.printArr(arrSize, numarr);

	//2 - вибором
	objSorter.cloneArr(arrSize, numarr_base, numarr);
	int sn = objSorter.SelectionSort(arrSize, numarr);
	objSorter.printArr(arrSize, numarr);

	//3 - гном'яче
	objSorter.cloneArr(arrSize, numarr_base, numarr);
	int gn = objSorter.GnomeSort(arrSize, numarr);
	objSorter.printArr(arrSize, numarr);

	//порівняння ефективності
	printf("Bubble sorting:    sorted in %d iterations\n", bn);
	printf("Selection sorting: sorted in %d iterations\n", sn);
	printf("Gnome sorting:     sorted in %d iterations\n", gn);

	system("pause");

	return 0;
}