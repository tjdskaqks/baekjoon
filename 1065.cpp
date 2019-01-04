/*
	1065 : 한수
	https://www.acmicpc.net/problem/1065
	https://github.com/tjdskaqks
	http://jcoder1.tistory.com/
*/
#include <iostream>
using namespace std;

int main()
{
	int n, i, count;
	int a, b, c;
  
	cin >> n;
  
	if (n < 100)
		cout << n;
	else
	{
		count = 99;
		for (i = 100; i <= n; i++)
		{
			a = i / 100;
			b = (i / 10) % 10;
			c = i % 10;
			if ((a - b) == (b - c))
				count++;
		}
		cout << count;
	}
}
