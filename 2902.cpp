/*
	2902 : KMP는 왜 KMP일까?
	https://www.acmicpc.net/problem/2902
	https://github.com/tjdskaqks
	http://jcoder1.tistory.com/
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s1, s2;
  
	cin >> s1;
  
	s2 = s1[0];
  
	for (int i = 1; i < s1.size(); i++)
		if (s1[i] == '-')
			s2 += s1[i + 1];
      
	cout << s2;
}
