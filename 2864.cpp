/*
	[2864] 5와 6의 차이
	https://www.acmicpc.net/problem/2864
	https://github.com/tjdskaqks
	http://jcoder1.tistory.com/
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int i, j, minsum, maxsum;
	string s1, s2;
  
	cin >> s1 >> s2;
  
	for (i = 0; i < s1.size(); i++)
		if (s1[i] == '5')
			s1[i] = '6';
      
	for (i = 0; i < s2.size(); i++)
		if (s2[i] == '5')
			s2[i] = '6';
      
	maxsum = stoi(s1) + stoi(s2);
  
	for (i = 0; i < s1.size(); i++)
		if (s1[i] == '6')
			s1[i] = '5';
      
	for (i = 0; i < s2.size(); i++)
		if (s2[i] == '6')
			s2[i] = '5';
	minsum = stoi(s1) + stoi(s2);
  
	cout << minsum << " " << maxsum << "\n";
}
