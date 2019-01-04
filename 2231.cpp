/*
	2231 : 분해합
	https://www.acmicpc.net/problem/2231
	https://github.com/tjdskaqks
	http://jcoder1.tistory.com/
*/
#include <iostream>
using namespace std;

int Solution(int num)
{
	int sum = num;
  
	while (num)
	{
		sum += num % 10;
		num /= 10;
	}
	return sum;
}

int main()
{
	int n, i;
  
	cin >> n;
  
	for (i = 1; i < 1000001; i++)
	{
		if (Solution(i) == n)
		{
			cout << i << "\n";
			return 0;
		}
	}
	cout << "0";
}
