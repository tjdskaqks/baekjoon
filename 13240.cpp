/*
	[13240] chessboard
	https://www.acmicpc.net/problem/13240
	https://github.com/tjdskaqks
	http://jcoder1.tistory.com/
*/
#include <iostream>
using namespace std;

int main()
{
	int i, j;
	int n, m;
	char star[11][11] = {};
  
	cin >> n >> m;
  
	for (i = 1; i <= n; i++)
	{
		if (i % 2 == 1)
		{
			for (j = 1; j <= m; j = j + 2)
			{
				star[i][j] = '*';
				star[i][j+1] = '.';
			}
		}
		else
		{
			for (j = 1; j <= m; j = j + 2)
			{
				star[i][j] = '.';
				star[i][j+1] = '*';
			}
		}
	}
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= m; j++)
			cout << star[i][j];
		cout << endl;
	}
	
	return 0;
}
