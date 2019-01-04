/*
	9251 : LCS 
	https://www.acmicpc.net/problem/9251
	https://github.com/tjdskaqks
	http://jcoder1.tistory.com/
*/
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

char a[1001], b[1001];
int dp[1001][1001] = { 0 };

int main()
{
	cin >> a >> b;
  
	for (int i = 1; i <= strlen(a); i++)
	{
		for (int j = 1; j <= strlen(b); j++)
		{
			if (a[i - 1] == b[j - 1])
				dp[i][j] = dp[i - 1][j - 1] + 1;
			else
				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
		}
	}
	cout << dp[strlen(a)][strlen(b)];
}
