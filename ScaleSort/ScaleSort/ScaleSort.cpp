// ScaleSort.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"vector"

using std::vector;

class ScaleSort {
public:
	vector<int> sortElement(vector<int> A, int n, int k)
	{
		// write code here
		if (n <= 0 || k <= 0 || k > n)
		{
			return A;
		}
		vector<int> B(A.begin(), A.begin() + k);
		int i, j, temp;
		for (i = (k - 2) / 2; i > 0; i--) {
			sort(B, i, k - 1);
		}
		for (i = 0; i < n - k; i++) {
			sort(B, 0, k - 1);
			A[i] = B[0];
			B[0] = A[i + k];

		}
		for (j = k - 1; j > 0; j--) {
			sort(B, 0, j);
			A[i] = B[0];
			i++;
			B[0] = B[j];
		}
		A[i] = B[0];
		return A;
	}
	void sort(vector<int> &A, int i, int k) {
		int temp = A[i], s;
		while (2 * i + 1 <= k) {
			s = 2 * i + 1;
			if (2 * (i + 1) <= k && A[2 * i + 1] > A[2 * (i + 1)])
				s++;
			if (temp < A[s])
				break;
			A[i] = A[s];
			i = s;
		}
		A[i] = temp;
	}
};

int main()
{
	int len = 7;
	//scanf_s("%d", &len);
	int p[8] = { 6, 12, 4, 63, 2, 35, 11 };
	ScaleSort Scale;
	Scale.sortElement(p, len);
	//insert_sort(p, len);
	for (int i = 0; i < len; i++)
	{
		printf("%d,", *(p + i));
	}
	scanf_s("%d", &len);
	return 0;
}
