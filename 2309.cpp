/*
	2309 : 일곱 난쟁이
	https://www.acmicpc.net/problem/2309
	https://github.com/tjdskaqks
	http://jcoder1.tistory.com/
*/
#include <iostream>
#include <algorithm>
using namespace std;

int sum = 0;

int Solution(int *arr)
{
	int i, j;
	for (i = 0; i < 8; i++)
	{
		for (j = i + 1; j < 9; j++)
		{
			if (sum - (arr[i] + arr[j]) == 100)
			{
				arr[i] = 0;
				arr[j] = 0;
				return 0;
			}
		}
	}
	return -1;
}

int main()
{
	int i;
	int arr[9];
  
	for (i = 0; i < 9; i++)
	{
		cin >> arr[i];
		sum += arr[i];
	}
	Solution(arr);
	sort(arr, arr + 9);
	for (i = 2; i < 9; i++)
		cout << arr[i] << "\n";
}
