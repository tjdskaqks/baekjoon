/*
	[9243] 파일 완전 삭제
	https://www.acmicpc.net/problem/9243
	https://github.com/tjdskaqks
	http://jcoder1.tistory.com/
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s1, s2;
	int i, n;
	
	cin >> n >> s1 >> s2;
  
	if (n % 2 != 0)
		for (i = 0; i < s1.size(); i++)
			if (s1[i] == '0')
				s1[i] = '1';
			else
				s1[i] = '0';
        
	if (s1 == s2)
		cout << "Deletion succeeded\n";
	else
		cout << "Deletion failed\n";
}
