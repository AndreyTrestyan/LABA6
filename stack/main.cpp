
#include <iostream>
#include <cstdlib>
#include "Stack.h"
#include "windows.h"

using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	STACK Stack;
	Stack.initial(); // �������������(���������� NULL ������� ��������)
	Stack.Push(1); // ���������� �������� � ����
	Stack.Push(15);
	
	Stack + 6; // ���������� �������� � ����
	Stack + 10;
	
	--Stack; // �������� Pop - ������ �������(� ������ ������ 10)

	Stack.OutPut(); // ����� ����� �� �����

	if (Stack.operator bool()) // ���������� ��������� bool
	{
		cout <<"\nStack is empty!\n\n"<< endl;
	}
	else
	{
		cout <<"\nStack is not empty!\n\n"<< endl;
	}
	
	STACK test;
	test.initial();
	Stack > test; // ����������� �� ����������� �� ������ ����
	test.OutPut();
	
	(Stack < test) == true ? cout << "������" : cout << "�� ������" << endl;

	system("pause");

}