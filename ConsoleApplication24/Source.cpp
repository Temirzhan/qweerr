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
		cout << "�������� ������� ��� ��������" << endl;
		cin >> N;
		cout << "-------------------------------------------------" << endl;
		if (N == 1)
		{/*�������� ���������, ������� � ������� ����� A(N,M) ������� ��� ��������, ����������� �� ���������� �������� �������� ����� B. ���������� ����� ����� ��������� � �������� �� � ������ C.
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
			cout << "������� �����" << endl;
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
			//���� ������������� ������� ������� 8�5. ����������: 
			//����� ���� ��������� ������� ������� �������;
			//����� ���� ��������� 3 - � ������ �������
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
			cout << "C���� ������� ������� = " << sum << endl;
			sum = 0;
			for (int i = 0; i < 5; i++)
			{
				sum += A[2][i];
			}
			cout << "C���� ������� ������ = " << sum << endl;
		}
		else if (N == 3)
		{
			//���� ������������� ������������� ������� ������� M�N. ������������ ���������� ������, ��������� �� ���������, ������� � ��������� [1,10]. 
			//����� ������������ ��������� ����������� ����������� ������
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
			cout << "������������= " << proizvedenie << endl;
		}
		else if (N == 4)
		{
			//���� ������������� ���������� �������.������� �������(������� ��� �����), ��� ����������� ���������� ���������, ������� ����� ��������
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
			cout << "����������� ���������� ���������, ������� ����� � ������� ��� ������� " << index << endl;

		}
		else if (N == 5)
		{
			//���� ������������� ���������� �������. ����� ����� ��������� �������, ������� ���� ������� ���������

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
			cout << "����� ��������� ������� ������� ���� ������� ���������= " << summ << endl;

		}
		cout << "������ ���������� ��������� �������?" << endl;
		cout << "y-da   n-net" << endl;
		cin >> f;
	} while (f == 'y');
}
