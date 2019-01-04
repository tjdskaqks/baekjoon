/*
	[15156] 과제
	https://www.acmicpc.net/problem/15156
	https://github.com/tjdskaqks
	http://jcoder1.tistory.com/
*/
#include <iostream>
using namespace std;

int main()
{
	double K, N, M;
	
	cin >> K >> N >> M;
  
	if (K*N > M)
		cout << K*N - M << '\n';
	else
		cout << "0" << '\n';
	return 0;
}
