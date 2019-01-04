/*
	[11366] Tons of Orcs, no Fibbin’
	https://www.acmicpc.net/problem/11366
	https://github.com/tjdskaqks
	http://jcoder1.tistory.com/
*/
#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	while (1)
	{
		scanf("%d %d %d", &a, &b, &c);
		if (c <= 0)
		{
			if (!a && !b && !c)
				break;
			continue;
		}
		int *v = new int[c+2];
		v[0] = a;
		v[1] = b;
		for (int i = 2; i < c + 2; i++)
		{
			int sum = v[i - 2] + v[i - 1];
			v[i] = sum;
		}
		printf("%d\n", v[c+1]);
		delete[] v;
	}
	return 0;
}
