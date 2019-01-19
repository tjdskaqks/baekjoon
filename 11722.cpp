/*
	[11722] 가장 긴 감소하는 부분 수열
	https://www.acmicpc.net/problem/11722
	https://github.com/tjdskaqks
	http://jcoder1.tistory.com/
*/

#include<iostream>
using namespace std;

int main(void)
{
	int N, max = 0, i, j;
	int Dp[1010] = {};
	int A[1010] = {};
  
	cin >> N;
  
	for (i = 1; i <= N; i++)
		cin >> A[i];
    
	for (i = 1; i <= N; i++)
	{
		int min = 0;
		for (j = 0; j < i; j++)
		{
			if (A[i]<A[j])
			{
				if (min < Dp[j])
					min = Dp[j];
			}
		}
		Dp[i] = min + 1;
		if (max < Dp[i])
			max = Dp[i];
	}
	cout << max << endl;
	
	return 0;
}
