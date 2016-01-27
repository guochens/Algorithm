// Insertion Sorting.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

//规范代码
/*void insert_sort(int*A, unsigned int n)
{
	int i, j;
	int temp;
	for (i = 1; i < n; i++)
	{
		temp = *(A + i);
		for (j = i; j > 0 && *(A + j - 1) > temp; j--)
		{
			*(A + j) = *(A + j - 1);
		}
		*(A + j) = temp;
	}
}*/

//版本一
/*class InsertionSort    
{
public:
	int* insertionSort(int* A, int n) {
		// write code here
		int i=0,j=0,temp=0;
		for (; i < n-1; i++)
		{
			temp = A[i + 1];
			for (j = i; j>=0; j--)
			{
				if (temp>A[j])
				{
					A[j + 1] = temp;
					break;
				}
				else
				{
					A[j + 1] = A[j];
					A[j] = temp;
				}
			}
		}
		return A;
	}
};*/

//版本二
class InsertionSort {
public:
	int* insertionSort(int* A, int n) {
		// write code here
		int i = 0, j = 0, temp = 0;
		for (; i < n - 1; i++)
		{
			temp = A[i + 1];
			for (j = i; j >= 0 && temp < A[j]; j--)
			{
				A[j + 1] = A[j];	
			}
			A[j+1] = temp;
		}
		return A;
	}
};

int main()
{
	int len=7;
	//scanf_s("%d", &len);
	int p[8] = { 6, 12, 4, 63, 2, 35, 11 };
	InsertionSort insert;
	insert.insertionSort(p, len);
	//insert_sort(p, len);
	for (int i = 0; i < len; i++)
	{
		printf("%d,", *(p + i));
	}
	scanf_s("%d", &len);
    return 0;
}

