/*
	[2740] 행렬 곱셈
	https://www.acmicpc.net/problem/2740
	https://github.com/tjdskaqks
	http://jcoder1.tistory.com/
*/

#include<iostream>
using namespace std;

int main()
{
	int arr1[101][101], arr2[101][101], arr3[101][101] = {0};
	int i, j, n, m, k;
  
	cin >> n >> m;
  
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
			cin >> arr1[i][j];
      
	cin >> m >> k;
	
	for (i = 0; i < m; i++)
		for (j = 0; j < k; j++)
			cin >> arr2[i][j];
      
	for (i = 0; i < n; i++)
		for (j = 0; j < k; j++)
			for (int l = 0; l < m; l++)
				arr3[i][j] += arr1[i][l] * arr2[l][j];
        
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < k; j++)
			cout << arr3[i][j] << " ";
		cout << "\n";
	}
	return 0;
}
