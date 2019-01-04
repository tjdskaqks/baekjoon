/*
	[2456] 나는 학급회장이다
	https://www.acmicpc.net/problem/2456
	https://github.com/tjdskaqks
	http://jcoder1.tistory.com/
*/
#include <iostream>
using namespace std;

int main()
{
	int n, i, j;
	pair<int ,int> arr[3];
  
	cin >> n;
  
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < 3; j++)
		{
			int a;
			cin >> a;
			arr[j].first += a;
			arr[j].second += a*a;
		}
	}
  
	int max = 0, check = 0;
  
	if (arr[0] < arr[1]) 
		max = 1;
	else if (arr[0] == arr[1]) 
		check = 1;
	
	if (arr[max] < arr[2])
	{
		max = 2;
		check = 0;
	}
	else if (arr[max] == arr[2]) 
		check = 1;
	if (check == 0)
		cout << 0 << " " << arr[max].first << endl;
	else
		cout << max + 1 << " " << arr[max].first << endl;
	return 0;
}
