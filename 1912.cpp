/*
	1912 : 연속합
	https://www.acmicpc.net/problem/1912
	https://github.com/tjdskaqks
	http://jcoder1.tistory.com/
*/
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int fastestMaxSum(const vector<int> & v)
{
	int sum = 0, psum = 0, i;
	for (i = 0; i < v.size(); i++)
	{
		psum = max(psum, 0) + v[i];
		sum = max(psum, sum);
	}
	
	return sum;
}

int main()
{
	int n, i;
  vector<int> v(n);
  
	cin >> n;

	for (i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		v.push_back(num);
	}
	cout << fastestMaxSum(v);
}
