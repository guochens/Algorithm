// Selection sort.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

class SelectionSort {
public:
	int* selectionSort(int* A, int n) {
		// write code here
		int i=0,j=0,num=0,temp=0;
		for (i = 0; i < n; i++)
		{
			temp = *(A + i);
			num = i;
			for (j = i+1; j < n  ; j++)
			{
				if (temp > *(A + j))
				{
					temp = *(A + j);
					num =  j;
				}
			}
			*(A + num) = *(A + i);
			*(A + i) = temp;
		}
		return A;
	}
};

int main()
{
	int len;
	scanf_s("%d", &len);
	int p[8] = { 6, 12, 4, 63, 2, 35, 11};
	SelectionSort select;
	select.selectionSort(p, len);
	for (int i = 0; i < len; i++)
	{
		printf("%d,", *(p + i));
	}
	scanf_s("%d", &len);
    return 0;
}

