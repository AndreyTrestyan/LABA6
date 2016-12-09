#include "Stack.h"
#include <iostream>
#define N 1024 // ����������� ���������� ����������� ���������� ���������� �������� ��� �����

using namespace std;



void STACK::initial() //������������� ������� ��������
{
	Start = NULL;
}

bool STACK::Empty(int Content) //�������� �� �������
{
	if (Content == 0)
		return true;
	else
		return false;

}

int STACK::Full(int Content) // �������� �� �������
{
	if (Content == N)
		return 1;
	else
		return 0;

}

int STACK::Push(int Content) // �������� ������� �� ����
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

int STACK::Pop(int &Content) // ������� ������� � ��������
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

void STACK::OutPut() // ����� ����� �� �������
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

