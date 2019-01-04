/*
	1547 : 공
	https://www.acmicpc.net/problem/1547
	https://github.com/tjdskaqks
	http://jcoder1.tistory.com/
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	bool v[4] = { false, true, false, false };
	int testcase, k = 0;
  
	cin >> testcase;
  
	for (int i = 1; i <= testcase; i++)
	{
		int a, b;
		cin >> a >> b;
		swap(v[a], v[b]);
	}
  
	for (int i = 1; i <= 3; i++)
	{
		if (v[i])
		{
			k = 1;
			cout << i;
			break;
		}
	}
	if (k == 0)
		cout << "-1";
}
