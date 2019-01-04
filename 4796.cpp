/*
	[4796] 캠핑
	https://www.acmicpc.net/problem/4796
	https://github.com/tjdskaqks
	http://jcoder1.tistory.com/
*/
#include <iostream>
using namespace std;

int main()
{
	int count = 1;
  
	while (1)
	{
		int l, p, v;
		cin >> l >> p >> v;
		if (!l && !p && !v)
			break;
		int sum = (v%p) > l ? l : (v%p);
		int result = v/p*l + sum;
		cout << "Case " << count++ << ": " << result << endl;
	}
	return 0;
}
