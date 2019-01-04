/*
	[11895] 속이기
	https://www.acmicpc.net/problem/11895
	https://github.com/tjdskaqks
	http://jcoder1.tistory.com/
*/
#include <iostream>
#include <algorithm>
using namespace std;

int xy = 0, sum = 0;
int arr[1010];

int main()
{
	int n, i;
  
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> arr[i];
		xy ^= arr[i];
		sum += arr[i];
	}
	sort(arr, arr + n);
	if (xy)
		cout << 0 << endl;
	else
		cout << sum - arr[0] << endl;
	return 0;
}
