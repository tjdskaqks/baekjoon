/*
	[15953] 상금 헌터
	https://www.acmicpc.net/problem/15953
	https://github.com/tjdskaqks
	http://jcoder1.tistory.com/
*/
#include <iostream>
using namespace std;

int main()
{
	int t, i;
  
	cin >> t;
  
	for (i = 0; i < t; i++)
	{
		int a, b, sum = 0;
		cin >> a >> b;
    
		if (!a)
			sum += 0;
		else if (a == 1)
			sum += 5000000;
		else if (a < 4)
			sum += 3000000;
		else if (a < 7)
			sum += 2000000;
		else if (a < 11)
			sum += 500000;
		else if (a < 16)
			sum += 300000;
		else if (a < 22)
			sum += 100000;
		else
			sum += 0;
      
		if (!b)
			sum += 0;
		else if (b == 1)
			sum += 5120000;
		else if (b < 4)
			sum += 2560000;
		else if (b < 8)
			sum += 1280000;
		else if (b < 16)
			sum += 640000;
		else if (b < 32)
			sum += 320000;
		else
			sum += 0;
		cout << sum << endl;
	}
	return 0;
}
