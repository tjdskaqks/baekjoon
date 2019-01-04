/*
	2493 : 탑
	https://www.acmicpc.net/problem/2493
	https://github.com/tjdskaqks
	http://jcoder1.tistory.com/
*/
#include <iostream>
#include <stack>
using namespace std;

int main()
{
	int n, t, i;
	stack<pair<int, int> > st;
	
	scanf("%d", &n);
	
	for (i = 1; i <= n; i++)
	{
		scanf("%d", &t);
		while (!st.empty())
		{
			if (st.top().second > t)
			{
				printf("%d ", st.top().first);
				break;
			}
			st.pop();
		}
		if (st.empty())
			printf("0 ");
		st.push(make_pair(i, t));
	}
}
