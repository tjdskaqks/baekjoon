/*
	[8394] 악수
	https://www.acmicpc.net/problem/8394
	https://github.com/tjdskaqks
	http://jcoder1.tistory.com/
*/

#include <iostream> 
using namespace std;

int fib[10000001];

int main()
{
	int n, i;
	cin >> n;
  
	fib[0] = 1;
	fib[1] = 1;
	fib[2] = 2;
	for (i = 3; i <= n; i++)
		fib[i] = (fib[i - 1] % 10 + fib[i - 2] % 10) % 10;
	cout << fib[n] << endl;
	return 0;
}
