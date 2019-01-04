/*
	[11367] Report Card Time
	https://www.acmicpc.net/problem/11367
	https://github.com/tjdskaqks
	http://jcoder1.tistory.com/
*/
#include <iostream>
#include <string>
using namespace std;

void result(int score);

int main()
{
	int testcase;
	cin >> testcase;
	while (testcase--)
	{
		string name;
		int score;
		cin >> name >> score;
		if (score >= 0 && score <= 100)
		{
			cout << name << " ";
			result(score);
		}
		else
			continue;
	}
	return 0;
}

void result(int score)
{
	string c;
	if (score >= 97 && score <= 100)
		c = "A+";
	else if (score > 89 && score < 97)
		c = "A";
	else if (score > 86 && score < 90)
		c = "B+";
	else if (score > 79 && score < 87)
		c = "B";
	else if (score > 76 && score < 80)
		c = "C+";
	else if (score > 69 && score < 77)
		c = "C";
	else if (score > 66 && score < 70)
		c = "D+";
	else if (score > 59 && score < 67)
		c = "D";
	else if (score >= 0 && score < 60)
		c = "F";
	cout << c << endl;
}
