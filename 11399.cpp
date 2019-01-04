/*
	[11399] ATM
	https://www.acmicpc.net/problem/11399
	https://github.com/tjdskaqks
	http://jcoder1.tistory.com/
*/
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int testcase, sum = 0, i;
	vector <int> arr;
  
	cin >> testcase;
  
	arr.push_back(0);
	for (i = 1; i <= testcase; i++)
	{
		int num;
		cin >> num;
		arr.push_back(num);
	}
  
	sort(arr.begin(), arr.end());
  
	for (i = 1; i <= testcase; i++)
	{
		arr[i] = arr[i - 1] + arr[i];
		sum += arr[i];
	}
	cout << sum;
}
