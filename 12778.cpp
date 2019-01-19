/*
	[12778] CTP공국으로 이민 가자
	https://www.acmicpc.net/problem/12778
	https://github.com/tjdskaqks
	http://jcoder1.tistory.com/
*/

#include <iostream>
using namespace std;

int main()
{
	int testcase, m, j;
	char alp;
	int arr1[501];
	char arr2[501];
  
	cin >> testcase;
  
	for (j = 0; j < testcase; j++)
	{
		cin >> m >> alp;
		if (alp == 'C')
		{
			for (int i = 0; i < m; i++)
				cin >> arr2[i];
        
			for (int i = 0; i < m; i++)
				printf("%d ", arr2[i]-64);
		}
		else if (alp == 'N')
		{
			for (int i = 0; i < m; i++)
				cin >> arr1[i];

			for (int i = 0; i < m; i++)
				printf("%c ", arr1[i]+64);
		}
		cout << endl;
	}
	return 0;
}
