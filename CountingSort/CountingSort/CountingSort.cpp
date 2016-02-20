// CountingSort.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

class CountingSort {
public:
	int* countingSort(int* A, int n) {
		// write code here
		int min = *A, max = *A, i = 0,j=0;
		for (i = 1; i < n; i++)
		{
			if (*(A + i)>max)
			{
				max = *(A + i);
				continue;
			}
			if (*(A + i) < min)
			{
				min = *(A + i);
			}
		}
		int *p = new int[max - min + 1];
		for (i = 0; i <max - min + 1; i++)
		{
			*(p + i) = 0;
		}
		for (i = 0; i < n; i++)
		{
			p[*(A + i) - min]++;
		}
		for (i = 0, j = 0; i < n; j++)
		{
			while (*(p +j)>0)
			{
				*(A + i) = min + j;
				*(p + j)-=1;
				i++;
			}
		}
		return A;
	}
};

int main()
{
	int len = 7;
	//scanf_s("%d", &len);
	int p[8] = { 6, 12, 4, 63, 2, 35, 11 };
	CountingSort Count;
	Count.countingSort(p, len);
	//insert_sort(p, len);
	for (int i = 0; i < len; i++)
	{
		printf("%d,", *(p + i));
	}
	scanf_s("%d", &len);
	return 0;
}
