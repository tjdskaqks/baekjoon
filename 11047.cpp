/*
	[11047] 동전 0
	https://www.acmicpc.net/problem/11047
	https://github.com/tjdskaqks
	http://jcoder1.tistory.com/
*/
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, i, k, count = 0;
	vector <int> arr;
  
	cin >> n >> k;
  
	for (i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		arr.push_back(num);
	}
  
	for (i = n-1; i >= 0; i--)
	{
		count += k / arr[i];
		k %= arr[i];
	}
	cout << count;
}
