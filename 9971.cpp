/*
	[9971] The Hardest Problem Ever
	https://www.acmicpc.net/problem/9971
	https://github.com/tjdskaqks
	http://jcoder1.tistory.com/
*/
#include <iostream>
#include <string>
using namespace std;

char chip[26] = { 'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z' };
char plain[26] ={ 'V','W','X','Y','Z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U' };

int main()
{
	string str;
	while (1)
	{	
		cin >> str;
		cin.ignore();
		char s[101];
		if (str == "START")
		{
			while (1)
			{
				cin.get(s, 101);
				for (int i = 0; i < sizeof(s) / sizeof(char); i++)
				{
					if (s[i] >= 'A' && s[i] <= 'Z')
					{
						for (int j = 0; j < 26; j++)
						{
							if (s[i] == chip[j])
							{
								s[i] = plain[j];
								break;
							}
						}
					}
					else
						s[i] = s[i];
				}
				break;
			}
		}
		if (str == "ENDOFINPUT")
			break;
		if (str == "END")
		{
			for (int i = 0; i < sizeof(s) / sizeof(char); i++)
			{
				if (s[i] == 0)
					break;
				else
					cout << s[i];
			}
				
			cout << endl;
			continue;
		}
	}
	return 0;
}
