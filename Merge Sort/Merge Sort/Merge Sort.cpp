// Merge Sort.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

class MergeSort {
public:
	int* mergeSort(int* A, int n) {
		// write code here
		int *p = new int[n];
		if (p != NULL)
		{
			sort(A,0, n-1, p);
		}
		return A;
		delete[] p;
	}
	
	//分类
	void sort(int *p, int first, int last, int *temp)
	{
		int mid = 0;
		if(first<last)
		{
			mid = (first + last) / 2;
			sort(p, first, mid, temp); //左
			sort(p, mid+1, last, temp);  //右
			merge(p, first, mid, last, temp);
		}	
	}

	//归并
	int merge(int *a, int first, int mid, int last, int *temp)
	{
		int j = mid + 1,i=first,f=first;
		for (; i <= mid&&j<= last;)
		{
			if (a[i] < a[j]) 
			{
				temp[first++] = a[i++];
			}
			else
			{
				temp[first++] = a[j++];
			}
		}
		while(i<=mid)
		{
			temp[first] = a[i];
			first++;
			i++;
		}
		while(j<=last)
		{
			temp[first] = a[j];
			first++;
			j++;
		}
		for (i = 0; ( f + i )< first; i++)
			a[f + i] = temp[f + i];
		return 0;
	}
};

int main()
{
	int len;
	//scanf_s("%d", &len);
	len = 7;
	int p[7] = { 6, 12, 4, 63, 2, 35, 11 };
	MergeSort merge;
	merge.mergeSort(p, len);
	for (int i = 0; i < len; i++)
	{
		printf("%d,", *(p + i));
	}
	scanf_s("%d", &len);
	return 0;
}

