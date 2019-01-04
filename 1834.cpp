/*
	1834 : 나머지와 몫이 같은 수
	https://www.acmicpc.net/problem/1834
	https://github.com/tjdskaqks
	http://jcoder1.tistory.com/
*/
#include <iostream>
using namespace std;

int main()
{
	int n;
	long long i, sum = 0;
	
	cin >> n;
	
	for (i = 1; i < n; i++)
		sum += (n + 1) * i;
	cout << sum << "\n";
}
