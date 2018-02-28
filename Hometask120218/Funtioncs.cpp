#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include "Vizov.h"
using namespace std;


char ArrABCS(char * arr)
{
	char ALPHA = 'A', alpha = 'a';
	for (char i = 0; i < 52; i+=2)
	{
		arr[i] = ALPHA++;
	}
	for (char i = 1; i < 52; i+=2)
	{
		arr[i] = alpha++;
	}
	return *arr;
}

void AlphabetPrint(char *arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i];
		if (i % 2 != 0)
		{
			if (i != 51)
				cout << "*";
		}

		if (i == 11 || i == 21 || i == 31 || i == 41 || i == 51)
			cout << endl;
	}
}

int CHAR(char *arr, int *count)
{
	setlocale(LC_ALL, "Rus");
	cout << "Начните вводить текст!!\nдля выхода введите * - " << endl;
	for (int i = 0; i < 1000; i++)
	{
		arr[i] = getchar();
		*count = i;
		if (arr[i] == '*')
			break;
	}
	return *arr;
}

void CharPrint(char *arr, int *size)
{	
	setlocale(LC_ALL, "Rus");
	for (int i = 0; i < *size; i++)
	{
		putchar(arr[i]);
	}
	cout << endl;
}
void AlhabetPrint2(char *arr, char *arr2, int *size)
{	
	setlocale(LC_ALL, "Rus");
	for (int i = 0; i < 52; i++)
	{
		cout << arr[i];
		if (i % 2 != 0)
		{
			if (i != 51)
			{
				cout << "*";
				CharPrint(arr2, size);
			}
		}
	}
}