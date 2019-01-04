/*
	[11365] !밀비 급일
	https://www.acmicpc.net/problem/11365
	https://github.com/tjdskaqks
	http://jcoder1.tistory.com/
*/
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	while (1)
	{
		string s;
		getline(cin, s);
		if (s == "END")
			break;
		reverse(s.begin(), s.end());
		cout << s << endl;
	}
	return 0;
}
