/*
	1813 : 마지막 한마디
	https://www.acmicpc.net/problem/1813
	https://github.com/tjdskaqks
	http://jcoder1.tistory.com/
*/
#include <iostream>
using namespace std;

int arr[100001] = { 0, };

int main()
{
	int n, i;
  
	cin >> n;
	
	for (i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		arr[num]++;
	}
	for (i = n; i >= 0; i--)
	{
		if (arr[i] == i)
		{
			cout << i;
			return 0;
		}
	}
	cout << "-1\n";
}
