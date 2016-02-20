// RadixSort.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

class RadixSort {
public:
	int* radixSort(int* A, int n) {
		// write code here
	}
};

int main()
{
	int len = 7;
	//scanf_s("%d", &len);
	int p[8] = { 6, 12, 4, 63, 2, 35, 11 };
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

