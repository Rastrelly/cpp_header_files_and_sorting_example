#include <iostream>
#include <ctime>
#include "sorter.h"

using namespace std;

int * numarr;
int * numarr_base;

int arrSize=50;

int main()
{

	srand(time(NULL)); //activating RNG

	numarr_base = new int[arrSize]; //prepping array

	//filling array with numbers from 0 to 99
	for (int i = 0; i < arrSize; i++)
	{
		int cn = rand() % 100;
		cout << i + 1 << ") " << cn << endl;
		numarr_base[i] = cn;
	}

	//creating sorter object
	sorter objSorter; 	

	//performing sorting
	//1 - bubble
	objSorter.cloneArr(arrSize, numarr_base, numarr);
	int bn = objSorter.BubbleSort(arrSize, numarr);
	objSorter.printArr(arrSize, numarr);

	//2 - selection
	objSorter.cloneArr(arrSize, numarr_base, numarr);
	int sn = objSorter.SelectionSort(arrSize, numarr);
	objSorter.printArr(arrSize, numarr);

	//3 - gnome
	objSorter.cloneArr(arrSize, numarr_base, numarr);
	int gn = objSorter.GnomeSort(arrSize, numarr);
	objSorter.printArr(arrSize, numarr);

	//comparing efficacy
	printf("Bubble sorting:    sorted in %d iterations\n", bn);
	printf("Selection sorting: sorted in %d iterations\n", sn);
	printf("Gnome sorting:     sorted in %d iterations\n", gn);

	system("pause");

	return 0;
}