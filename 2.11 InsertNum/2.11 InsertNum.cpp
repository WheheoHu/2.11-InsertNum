// 2.11 InsertNum.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"


template<typename T>
void InsertNum(linear_Table<T>,T NumToInsert);

int main()
{

	//initialize linear table LinTa
	linear_Table<int> LinTa;
	LinTa.InitList();
		for (int i = 0; i < 40; i++)
		{
			LinTa.ListInsert(i + 1, i);
		}
	

	int NumToInsert_int;
	std::cin >> NumToInsert_int;
	InsertNum(LinTa, NumToInsert_int);
	

	LinTa.ClearList();
	system("pause");
	return 0;
}

template<typename T>
void InsertNum(linear_Table<T> LinTa, T NumToInsert)
{
	for (int i = 0; i < LinTa.ListLenght(); i++)
	{
		if (NumToInsert > LinTa.GetElem(LinTa.ListLenght()))
		{
			LinTa.ListInsert(LinTa.ListLenght() + 1, NumToInsert); 
			break;
		}
		if (LinTa.GetElem(i + 1) > NumToInsert)
		{
			LinTa.ListInsert(i, NumToInsert);
			break;
		}

	}
	for (int i = 0; i < LinTa.ListLenght(); i++)
	{
		std::cout << LinTa.GetElem(i + 1) << std::endl;
	}
}
