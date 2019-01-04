/*
	[10995] 별 찍기 - 20
	https://www.acmicpc.net/problem/10995
	https://github.com/tjdskaqks
	http://jcoder1.tistory.com/
*/
#include <iostream>
using namespace std;

int main()
{
	int n, i, j;
	
	cin >> n;
	
	for (i = 1; i <= n; i++)
	{
		if (!(i % 2))
			cout << ' ';
		for (j = 1; j <= n; j++)
			cout << "* ";
		cout << '\n';
	}
	return 0;
}
