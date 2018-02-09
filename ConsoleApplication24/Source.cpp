#include<locale.h>
#include<stdio.h>
#include<iostream>
#include<time.h>

using namespace std;
char f;
void main()
{
	setlocale(LC_ALL, "rus");
	do {
		int N;
		cout << "Выберите задания для проверки" << endl;
		cin >> N;
		cout << "-------------------------------------------------" << endl;
		if (N == 1)
		{/*Написать программу, которая в матрице чисел A(N,M) находит все элементы, превышающие по абсолютной величине заданное число B. Подсчитать число таких элементов и записать их в массив C.
		 */
			int A[10][10];
			int Chislo;
			int Ch = 0;
			int C[100];
			for (int i = 0; i < 10; i++)
			{
				for (int j = 0; j < 10; j++)
				{
					A[i][j] = 1 + rand() % 100;
					cout << "A[" << i << "][" << j << "]" << A[i][j] << "\t";
				}
				cout << endl;
			}
			cout << "Введите число" << endl;
			cin >> Chislo;
			for (int i = 0; i < 10; i++)
			{
				for (int j = 0; j < 10; j++)
				{
					if (Chislo < A[i][j])
					{
						C[Ch] = A[i][j];
						Ch++;
					}
				}
			}
			for (int i = 0; i < Ch; i++)
			{
				cout << "C[" << i << "]= " << C[i] << endl;
			}

		}
		else if (N == 2)
		{
			//Дана целочисленная матрица размера 8х5. Определить: 
			//сумму всех элементов второго столбца массива;
			//сумму всех элементов 3 - й строки массива
			int A[8][5];
			int sum = 0;
			for (int i = 0; i < 8; i++)
			{
				for (int j = 0; j < 5; j++)
				{
					A[i][j] = 1 + rand() % 100;
					cout << "A[" << i << "][" << j << "]" << A[i][j] << "\t";
				}
				cout << endl;
			}
			for (int i = 0; i < 8; i++)
			{
				sum += A[i][1];
			}
			cout << "Cумма второго столбца = " << sum << endl;
			sum = 0;
			for (int i = 0; i < 5; i++)
			{
				sum += A[2][i];
			}
			cout << "Cумма трейтей строки = " << sum << endl;
		}
		else if (N == 3)
		{
			//Дана целочисленная прямоугольная матрица размера M·N. Сформировать одномерный массив, состоящий из элементов, лежащих в интервале [1,10]. 
			//Найти произведение елементов полученного одномерного массив
			int A[8][5]; int C[40];
			int c = 0;
			int proizvedenie = 1;
			for (int i = 0; i < 8; i++)
			{
				for (int j = 0; j < 5; j++)
				{
					A[i][j] = 1 + rand() % 100;
					cout << "A[" << i << "][" << j << "]" << A[i][j] << "\t";
					if (((A[i][j]) >= 1) && ((A[i][j]) <= 10))
					{
						C[c] = A[i][j];
						proizvedenie *= C[c];
						c++;
					}
				}
				cout << endl;
			}
			for (int i = 0; i < c; i++)
			{
				cout << "C[" << i << "]= " << C[i] << endl;
			}
			cout << "Произведение= " << proizvedenie << endl;
		}
		else if (N == 4)
		{
			//Дана целочисленная квадратная матрица.Указать столбец(назвать его номер), где минимальное количество элементов, кратных сумме индексов
			int A[8][8];
			int ch = 0;
			int min = 100;
			int index;
			int AA;
			for (int i = 0; i < 8; i++)
			{
				for (int j = 0; j < 8; j++)
				{
					A[i][j] = 1 + rand() % 100;
					cout << "A[" << i << "][" << j << "]" << A[i][j] << "\t";

				}

				cout << endl;
			}
			for (int i = 0; i < 8; i++)
			{
				for (int j = 0; j < 8; j++)
				{
					if (i + j > 0)
					{
						if ((A[i][j] % (i + j)) == 0)
						{
							ch++;
						}
					}
				}
				if (min > ch)
				{
					min = ch;
					index = i;
				}
				ch = 0;
			}
			cout << "Минимальное количесвто элементов, кратных сумме в столбце под номером " << index << endl;

		}
		else if (N == 5)
		{
			//Дана целочисленная квадратная матрица. Найти сумму элементов матрицы, лежащих выше главной диагонали

			int A[10][10];
			int summ = 0;
			for (int i = 0; i < 10; i++)
			{
				for (int j = 0; j <10; j++)
				{
					A[i][j] = 1 + rand() % 100;
					cout << "A[" << i << "][" << j << "]" << A[i][j] << "\t";
				}
				cout << endl;
			}
			for (int i = 0, j = 0; i < 10, j < 9; i++, j++)
			{
				summ += A[i][j + 1];
			}
			cout << "Сумма элементов матрицы лежащик выше главной диагонали= " << summ << endl;

		}
		cout << "Хотите продолжить проверять задания?" << endl;
		cout << "y-da   n-net" << endl;
		cin >> f;
	} while (f == 'y');
}
