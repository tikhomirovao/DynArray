#include <iostream>
#include "DynArray.h"

using namespace std;

//функция создания и заполнение массива случайными числами
DynArray CreateArray(size_t Size)
{
	DynArray TMP(Size); //создает локальный lvalue объект функции, указанного размера
	TMP.Randomize(-99, 99); //заполняет объект случайными числами от -99 до 99 включительно
	return TMP;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand((unsigned int)time(nullptr));

	DynArray *Array = new DynArray(20U); //конструктор с параметрами

	cout << *Array << endl;

	Array->Randomize(-99, 99);
	cout << *Array << endl;

	Array->Sort();
	cout << *Array << endl;

	delete Array;
	Array = nullptr;


}