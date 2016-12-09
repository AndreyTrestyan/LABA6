
#include <iostream>
#include <cstdlib>
#include "Stack.h"
#include "windows.h"

using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	STACK Stack;
	Stack.initial(); // инициализация(добавление NULL первого элемента)
	Stack.Push(1); // добавление элемента в стек
	Stack.Push(15);
	
	Stack + 6; // добавление элемента в стек
	Stack + 10;
	
	--Stack; // операция Pop - верхни элемент(в данном случае 10)

	Stack.OutPut(); // вывод стека на экран

	if (Stack.operator bool()) // перегрузка оператора bool
	{
		cout <<"\nStack is empty!\n\n"<< endl;
	}
	else
	{
		cout <<"\nStack is not empty!\n\n"<< endl;
	}
	
	STACK test;
	test.initial();
	Stack > test; // копирование по возрастанию по второй стек
	test.OutPut();
	
	(Stack < test) == true ? cout << "Меньше" : cout << "не меньше" << endl;

	system("pause");

}