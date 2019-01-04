/*
	[10814] 나이순 정렬
	https://www.acmicpc.net/problem/10814
	https://github.com/tjdskaqks
	http://jcoder1.tistory.com/
*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(pair<int, string> v1, pair<int, string> v2)
{
	if (v1.first < v2.first)
		return true;
	else if (v1.first == v2.first)
		return false;
	
	return false;
}

int main()
{
	int n, j;
	vector< pair<int, string> > v;
  
	cin >> n;
  
	for (j = 0; j < n; j++)
	{
		int age;
		string name;
		cin >> age >> name;
		v.push_back(make_pair(age, name));
	}
	stable_sort(v.begin(), v.end(), cmp);
	for (j = 0; j < n; j++)
		cout << v[j].first << " " << v[j].second << "\n";
}
