/*
	11729 : 하노이 탑 이동 순서
	https://www.acmicpc.net/problem/11729
	https://github.com/tjdskaqks
	http://jcoder1.tistory.com/
*/

#include <iostream>
using namespace std;

void HanoiTowerMove(int num, int from, int by, int to)
{
	if (num == 0)    // 이동할 원반의 수가 1개라면
		return;
	else
	{
		HanoiTowerMove(num - 1, from, to, by);    // 3단계 중 1단계
		printf("%d %d\n", from, to);  // 3단계 중 2단계
		HanoiTowerMove(num - 1, by, from, to);    // 3단계 중 3단계
	}
}

int main(void)
{
	int n;
  
	cin >> n;
  
	cout << (1 << n) - 1 << "\n";
  
	HanoiTowerMove(n, 1, 2, 3);
  
	return 0;
}
