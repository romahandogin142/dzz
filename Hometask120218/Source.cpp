#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <iostream>
#include "Vizov.h"
using namespace std;

void main()
{	
	/*Дана строка, содержащая только английские буквы(большие и маленькие).
	Добавить символ ‘*’(звездочка) между буквами
		(перед первой буквой и после последней символ
		‘*’ добавлять не нужно).
		Входные данные
		Вводится строка ненулевой длины.Известно также, что длина строки не превышает 1000 знаков.
			Выходные данные
	Вывести строку, которая получится после добавления символов '*'.*/


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