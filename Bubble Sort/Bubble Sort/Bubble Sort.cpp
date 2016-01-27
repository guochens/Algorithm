// Bubble Sort.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

class BubbleSort {
public:
	int* bubbleSort(int* A, int n) {
		// write code here
		int tem=0,i,j;
		for (i = n; i > 1;i--)
		{
			for (j = 0; j < i - 1; j++)
			{
				if (A[j] > A[j+1])
				{
					tem = A[j];
					A[j] = A[j + 1];
					A[j + 1] = tem;
				}
			}
		}
		return A;  //数组溢出？
	}
};

int main()
{
	int len;
	scanf_s("%d", &len);
	int p[8] = {6, 12, 4, 63, 2, 3,45,11};
	BubbleSort bubble;
	bubble.bubbleSort(p,len);
	for (int i = 0; i < len; i++)
	{
		printf("%d,", *(p+i));
	}
	scanf_s("%d",&len);
	return 0;
}

