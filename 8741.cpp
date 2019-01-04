/*
	[8741] 이진수 합
	https://www.acmicpc.net/problem/8741
	https://github.com/tjdskaqks
	http://jcoder1.tistory.com/
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
  
	cin >> n;
  
	string front(n, '1');
	string back(n - 1, '0');
  
	cout << front.c_str() << back.c_str() << endl;
}
