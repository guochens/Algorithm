// RadixSort.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <math.h>

class RadixSort {
public:
	int* radixSort(int* A, int n) {
		// write code here
		int order = 0,i=0;
		for (order = 0;;order++)
		{
			i = sort(A, n, order);
			if (i == 0)
			{
				break;
			}
		}
		return A;
	}

	int sort(int *a, int n, int order)
	{
		int i = 0;
		int add[10][30] = { 0 }, num[10] = { 0 }, j = 0, temp = 0,quyu=pow(10,order),temp_=0;
		for (i = 0; i < n; i++)
		{
			j = (a[i]/quyu) % 10;
			add[j][num[j]] = a[i];
			num[j]++;
		}
		if (num[0] == n)
		{
			return 0;
		}
		for (i=0,j = 0; j < 10; j++)
		{
			temp_ = 0;
			while (num[j] != 0 && i < n)
			{
				a[i] = add[j][temp_];
				num[j]--;
				i++;
				temp_++;
			}
		}
		return 1;
	}
};

int main()
{
	int len = 28;
	//scanf_s("%d", &len);
	int p[28] = { 32, 103, 24, 88, 95, 70, 97, 15, 102, 6, 79, 46, 51, 37, 93, 108, 9, 58, 53, 58, 79, 36, 58, 91, 78, 58, 61, 81 };
	RadixSort Radix;
	Radix.radixSort(p, len);
	//insert_sort(p, len);
	for (int i = 0; i < len; i++)
	{
		printf("%d,", *(p + i));
	}
	scanf_s("%d", &len);
	return 0;
}

