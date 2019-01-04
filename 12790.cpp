/*
	[12790] Mini Fantasy War
	https://www.acmicpc.net/problem/12790
	https://github.com/tjdskaqks
	http://jcoder1.tistory.com/
*/
#include <iostream>
using namespace std;

int main()
{
	int i, t;
	int arr[4], a;
  
	cin >> t;
  
	while (t--)
	{
		for (i = 0; i < 4; i++)
			cin >> arr[i];
		for (i = 0; i < 4; i++)
		{
			cin >> a;
			arr[i] += a;
		}
		if (arr[0] < 1)
			arr[0] = 1;
		if (arr[1] < 1)
			arr[1] = 1;
		if (arr[2] < 0)
			arr[2] = 0;
		cout << arr[0] + 5 * arr[1] + 2 * arr[2] + 2 * arr[3] << '\n';
	}
}
