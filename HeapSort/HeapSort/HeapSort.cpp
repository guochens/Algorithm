// HeapSort.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

class HeapSort {
public:
	//入口
	int* heapSort(int* A, int n) {
		// write code here
		heap(A, n);
		for (; n > 0; n--)
		{
			swap(A, A + n - 1);
			heap(A, n - 1);
		}
		return A;
	}

	//生成大根堆
	void heap(int *a,int n)
	{
		int i = 0,rchild=0,lchild=0,max=0;
		for (i = (n-1) / 2; i >= 0; i--)
		{
			lchild = 2 * i + 1;
			rchild = 2 * i + 2;
			if (rchild < n)
			{
				if (a[i] >= a[rchild] && a[i] >= a[lchild])
				{
					max = i;
				}
				else if (a[rchild] >= a[i] && a[rchild] >= a[lchild])
				{
					max = rchild;
				}
				else
				{
					max = lchild;
				}
			}
			else if(rchild==n)
			{
				if (a[i] >= a[lchild])
				{
					max = i;
				}
				else
				{
					max = lchild;
				}
			}
			else
			{
				max = i;
			}
			swap(a + i, a + max);
		}
	}

	//交换函数
	void swap(int *a, int *b)
	{
		int temp = 0;
		temp = *a;
		*a = *b;
		*b = temp;
	}
};

int main()
{
	int len=28;
	//scanf_s("%d", &len);
	int p[28] = { 32,103,24,88,95,70,97,15,102,6,79,46,51,37,93,108,9,58,53,58,79,36,58,91,78,58,61,81 };
	HeapSort heap;
	heap.heapSort(p, len);
	for (int i = 0; i < len; i++)
	{
		printf("%d,", *(p + i));
	}
	scanf_s("%d", &len);
	return 0;
}

