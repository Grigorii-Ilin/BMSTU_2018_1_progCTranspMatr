/*
We need to transpose a matrix
Транспонирование матрицы
*/

#include "stdafx.h"


#include <conio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>


#pragma warning(disable:4996)




int main()
{

	setlocale(LC_ALL, "rus");


	const int N = 100; //макс. размер матрицы
	int m[N][N];
	int r = 0, c = 0;

	printf("\n Введите количество строк и столбцов матрицы: ");
	scanf("%d%d", &r, &c);

	srand((unsigned)time(NULL));

	printf("\n Исходная матрица: ");
	int i, j;
	for (i = 0; i <= r - 1; i++)
	{
		printf("\n\t");
		for (j = 0; j <= c - 1; j++)
		{
			m[i][j] = rand() % 50;
			printf("%5d", m[i][j]);
		}
	}

	int t[N][N];//  транспонированная матрица
	for (i = 0; i <= r - 1; i++)
	{
		for (j = 0; j <= c - 1; j++)
		{
			t[j][i] = m[i][j];
		}
	}

	printf("\n Транспонированная матрица: ");
	for (i = 0; i <= c - 1; i++)
	{
		printf("\n\t");
		for (j = 0; j <= r - 1; j++)
		{
			printf("%5d", t[i][j]);
		}
	}


	getch();
	return 0;
}

