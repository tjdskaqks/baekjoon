/*
	[1269] 대칭 차집합
	https://www.acmicpc.net/problem/1269
	https://github.com/tjdskaqks
	http://jcoder1.tistory.com/
*/
#include <iostream>
#include <set>
using namespace std;

int main()
{
	set<int> s;
	int n1, n2, i;
  
	cin >> n1 >> n2;
  
	for (i = 0; i < n1; i++)
	{
		int a;
		cin >> a;
		s.insert(a);
	}
	for (i = 0; i < n2; i++)
	{
		int a;
		cin >> a;
		if (s.count(a)) 
			s.erase(a);
		else 
			s.insert(a);
	}
	cout << s.size() << endl;
	return 0;
}
