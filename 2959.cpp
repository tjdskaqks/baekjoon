/*
	2959 : 거북이
	https://www.acmicpc.net/problem/2959
	https://github.com/tjdskaqks
	http://jcoder1.tistory.com/
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int arr[4];
  
	cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];
  
	sort(arr, arr + 4);
  
	cout << arr[0] * arr[2] << endl;
}
