#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <iostream>
#include "Vizov.h"
using namespace std;

void main()
{	
	/*���� ������, ���������� ������ ���������� �����(������� � ���������).
	�������� ������ �*�(���������) ����� �������
		(����� ������ ������ � ����� ��������� ������
		�*� ��������� �� �����).
		������� ������
		�������� ������ ��������� �����.�������� �����, ��� ����� ������ �� ��������� 1000 ������.
			�������� ������
	������� ������, ������� ��������� ����� ���������� �������� '*'.*/


	setlocale(LC_ALL, "Rus");
	char alphabet[52], arr[1000];
	int count = 0;
	ArrABCS(alphabet);
	AlphabetPrint(alphabet, 52);
	CHAR(arr, &count);
	//CharPrint(arr, &count);
	AlhabetPrint2(alphabet, arr, &count);
	system("pause");
}