#include "Stack.h"
#include <iostream>
#define N 1024 // максимально допустимое динамически выделяемое количество объектов для стека

using namespace std;



void STACK::initial() //инициализация первого элемента
{
	Start = NULL;
}

bool STACK::Empty(int Content) //проверка на пустоту
{
	if (Content == 0)
		return true;
	else
		return false;

}

int STACK::Full(int Content) // проверка на полноту
{
	if (Content == N)
		return 1;
	else
		return 0;

}

int STACK::Push(int Content) // добавить элемент на верх
{
	LPELEMENT NE = new ELEMENT;
	if (!NE)
		return 0;
	NE->Content = Content;
	NE->Next = Start;
	Start = NE;
	numberofelements++;
	return 1;
}

int STACK::Pop(int &Content) // извлечь элемент с верхушки
{
	if (!Start)
		return 0;
	Content = Start->Content;
	int k = Start->Content;
	LPELEMENT Temp = Start;
	Start = Start->Next;
	delete Temp;
	numberofelements--;
	return k;
}

void STACK::OutPut() // вывод стека на консоль
{
	if (!Start)
	{
		cout << "Stack is empty" << endl;
		return;
	}
	LPELEMENT Temp = Start;
	while (Temp)
	{
		cout << Temp->Content << endl;
		Temp = Temp->Next;
	}
	cout << "\n\n" << endl;

}

