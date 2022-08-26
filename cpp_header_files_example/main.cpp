#include <iostream>
#include <ctime>
#include "sorter.h"

using namespace std;

int * numarr;
int * numarr_base;

int arrSize=50;

int main()
{

	srand(time(NULL)); //�������� ��� � ���������� ��'��

	numarr_base = new int[arrSize]; //������ ����� �� ����������

	//���������� ����� ����������� ������� �� 0 �� 99
	for (int i = 0; i < arrSize; i++)
	{
		int cn = rand() % 100;
		cout << i + 1 << ") " << cn << endl;
		numarr_base[i] = cn;
	}

	//��������� ��'���-������������
	sorter objSorter; 

	

	//�������� ����������
	//1 - ����������
	objSorter.cloneArr(arrSize, numarr_base, numarr);
	int bn = objSorter.BubbleSort(arrSize, numarr);
	objSorter.printArr(arrSize, numarr);

	//2 - �������
	objSorter.cloneArr(arrSize, numarr_base, numarr);
	int sn = objSorter.SelectionSort(arrSize, numarr);
	objSorter.printArr(arrSize, numarr);

	//3 - ����'���
	objSorter.cloneArr(arrSize, numarr_base, numarr);
	int gn = objSorter.GnomeSort(arrSize, numarr);
	objSorter.printArr(arrSize, numarr);

	//��������� �����������
	printf("Bubble sorting:    sorted in %d iterations\n", bn);
	printf("Selection sorting: sorted in %d iterations\n", sn);
	printf("Gnome sorting:     sorted in %d iterations\n", gn);

	system("pause");

	return 0;
}