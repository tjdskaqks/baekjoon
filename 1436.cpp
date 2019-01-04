/*
	1436 : 영화감독 숌
	https://www.acmicpc.net/problem/1436
	https://github.com/tjdskaqks
	http://jcoder1.tistory.com/
*/
#include <iostream>
#include <string>
using namespace std;
int main()
{ 
	int n, num = 0;
	cin >> n;
	for (int i = 666; ; ++i)
	{
		string s = to_string(i);
		
		if (s.find("666") != -1)
			++num;
		if (num == n)
		{
			cout << i;
			break;
		}
	}
}
