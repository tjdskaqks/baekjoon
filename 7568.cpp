/*
	7568 : 덩치
	https://www.acmicpc.net/problem/7568
	https://github.com/tjdskaqks
	http://jcoder1.tistory.com/
*/
#include <iostream>
using namespace std;

int main()
{
	int n, i, j;
	int arr[3][51] = {0};
  
	cin >> n;
  
	for (i = 0; i < n; i++)
		cin >> arr[0][i] >> arr[1][i];
    
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (i == j)
				continue;
			else if (arr[0][i] < arr[0][j] && arr[1][i] < arr[1][j])
				arr[2][i]++;
		}
	}
	for (i = 0; i < n; i++)
		cout << arr[2][i] + 1 << " ";
}
