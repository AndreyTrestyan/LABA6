#pragma once
#include <iostream>

struct ELEMENT
{
	int Content;
	ELEMENT *Next;
};
typedef ELEMENT *LPELEMENT;
class STACK
{	
private:
	int numberofelements = 0; // количество элементов по умолчанию
public:

	void initial();
	int Push(int Content);
	int Pop(int &Content);
	bool Empty(int Content);
	int Full(int Content);
	void OutPut();
	LPELEMENT Start;


	friend STACK operator + ( STACK& x, const int n)
	{
		x.Push(n);
		return x;
	}

	friend STACK operator--(STACK& x)
	{
		int n = 1;
		x.Pop(n);
		return x;
	}

	operator bool() const
	{
		
		if (!Start || Start == NULL)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	STACK operator>(STACK& y)
	{
		int i = 0;
		if (!Start)
		{
			printf("стек пуст\n");
			return y;
		}
		int *n = new int[numberofelements];
		LPELEMENT Temp = Start;
		while (Temp)
		{
			n[i] = Temp->Content;
			i++;
			Temp = Temp->Next;
		}

		int k, p, flag = 1;
		int temp;
		int numLength = numberofelements;
		for (k = 1; (k <= numLength) && flag; k++)
		{
			flag = 0;
			for (p = 0; p < (numLength - 1); p++)
			{
				if (n[p + 1] > n[p])
				{
					temp = n[p];
					n[p] = n[p + 1];
					n[p + 1] = temp;
					flag = 1;
				}
			}
		}

		int u = 0;
		Temp = Start;
		while (Temp)
		{
			y.Push(n[u]);
			u++;
			Temp = Temp->Next;
		}
		delete[]n;
		return y;
	}
};

