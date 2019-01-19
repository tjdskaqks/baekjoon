/*
	[2506] 점수계산
	https://www.acmicpc.net/problem/2506
	https://github.com/tjdskaqks
	http://jcoder1.tistory.com/
*/

#include <iostream>
using namespace std;

int main()
{
	int Testcase, i, Allcount, Count;
	int n;
  
	cin >> Testcase;
  
	Allcount = 0;
	Count = 0;
  
	for (i = 0; i < Testcase; i++)
	{		
		cin >> n;
		if (n == 1)
		{	
			Count++;
			Allcount += Count;
		}
		else
			Count = 0;
	}
	cout << Allcount << endl;
	return 0;
}
