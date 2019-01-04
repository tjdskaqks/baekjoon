/*
	9252 : LCS 2 
	https://www.acmicpc.net/problem/9252
	https://github.com/tjdskaqks
	http://jcoder1.tistory.com/
*/
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string s1, s2;
int dp[1001][1001] = { 0 };

int main()
{
	int i, j;
  
	cin >> s1 >> s2;
  
	for (i = 1; i <= s1.size(); i++)
	{
		for (j = 1; j <= s2.size(); j++)
		{
			if (s1.at(i - 1) == s2.at(j - 1))
				dp[i][j] = dp[i - 1][j - 1] + 1;
			else
				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
		}
	}
	cout << dp[s1.size()][s2.size()] << endl;
  
	i = s1.size();
	j = s2.size();
  
	string s;
  
	while (dp[i][j] != 0)
	{
		if (dp[i][j] == dp[i - 1][j])
			i--;
		else if (dp[i][j] == dp[i][j - 1])
			j--;
		else
		{
			s += s1.at(i - 1);
			i--, j--;
		}
	}
  
	reverse(s.begin(), s.end());
	cout << s;
}
