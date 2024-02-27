#include <iostream>
#include "DynArray.h"

using namespace std;

//������� �������� � ���������� ������� ���������� �������
DynArray CreateArray(size_t Size)
{
	DynArray TMP(Size); //������� ��������� lvalue ������ �������, ���������� �������
	TMP.Randomize(-99, 99); //��������� ������ ���������� ������� �� -99 �� 99 ������������
	return TMP;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand((unsigned int)time(nullptr));

	DynArray *Array = new DynArray(20U); //����������� � �����������

	cout << *Array << endl;

	Array->Randomize(-99, 99);
	cout << *Array << endl;

	Array->Sort();
	cout << *Array << endl;

	delete Array;
	Array = nullptr;


}