// QuickSort.cpp : 定义控制台应用程序的入口点。
////ran = (max - min + 1)*rand() / (RAND_MAX + 1.0) + min;   //产生[min，max]区间的随机数

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

class QuickSort {
public:
	//入口
	int* quickSort(int* A, int n) {
		// write code here
		int max=n-1,min=0,ran=0;
		int *temp=new int[n];
		ran = (max - min + 1)*rand() / (RAND_MAX + 1.0) + min;
		sort(A, max, ran, min,temp);
		return A;
	}

	//递归主体
	void sort(int *a, int max, int ran, int min,int *temp)
	{
		int ra = 0,tem=0;
		tem =quick(a, max, ran, min,temp);
		if(tem - min > 1)
		{
			ra = (ran - 1 - min + 1)*rand() / (RAND_MAX + 1.0) + min;
			sort(a, ran - 1, ra, min,temp);//左
		}
		if (max - tem  >1)
		{
			ra = (max - ran + 1 + 1)*rand() / (RAND_MAX + 1.0) + min;
			sort(a, max, ra, ran + 1, temp);//右
		}
	}

	//划分
	int quick(int *a, int max,int ran , int min,int *temp)
	{
		int i=0, j = 0,num=0;
		for (i = 0; i <= max; i++)
		{
			temp[i] = a[i];
		}
		swap(temp +max, temp +ran);
		for (i = 0; i < max;i++)
		{
			if (temp[i] < temp[max])
			{
				swap(temp + i, temp + num);
				num++;
			}
		}
		swap(temp +num, temp +max);
		for (i = 0; i <= max; i++)
		{
			a[i] =temp[i] ;
		}
		return num;
	}

	//交换函数
	void swap(int *a, int *b)
	{
		int temp=0;
		temp = *a;
		*a = *b;
		*b = temp;
	}
};

int main()
{
	int len;
	//scanf_s("%d", &len);	
	len = 13;
	//int max = 6, min = 0, ran = 0;
	//for (int i = 0; i < 10;i++)
	//{
	//	ran = (max - min + 1)*rand() / (RAND_MAX + 1.0) + min;
	//	printf(" %d ", ran);
	//}
	int p[13] = { 54, 35, 48, 36, 27, 12, 44, 44, 8, 14, 26, 17, 28 };
	QuickSort quick;
	quick.quickSort(p, len);
	for (int i = 0; i < len; i++)
	{
		printf("%d,", *(p + i));
	}
	scanf_s("%d", &len);
	return 0;
}

