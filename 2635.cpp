/*
	[2635] 수 이어가기
	https://www.acmicpc.net/problem/2635
	https://github.com/tjdskaqks
	http://jcoder1.tistory.com/
*/
#include <iostream>
#include <time.h>
#include <vector>
using namespace std;

int main()
{
	int n, i, sub;
	vector <int> arr;
	
	srand((int)time(NULL));
	cin >> n;
	arr.push_back(n);
	arr.push_back(rand() % n + 1);
	sub = n - (rand() % n + 1);
	while (sub >= 0)
	{
		arr.push_back(sub);
		sub = arr[arr.size() - 2] - arr[arr.size() - 1];
	}
	cout << arr.size() << endl;
	for (i = 0; i < arr.size(); i++)
		cout << arr[i] << " ";
	cout << endl;
	return 0;
}
