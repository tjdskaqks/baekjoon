/*
	[1015] 수열 정렬
	https://www.acmicpc.net/problem/1015
	https://github.com/tjdskaqks
	http://jcoder1.tistory.com/
*/
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int size, num;
    int arr[51];
    vector< pair<int, int> > v;
    
    cin >> size;

    for(int i = 0; i < size; i++)
    {
        cin >> num;
        v.push_back(make_pair(num, i));
    }
    
    sort(v.begin(), v.end());
    
    for(int i = 0; i < size; i++)
        arr[v[i].second] = i;
    for(int i = 0; i < size; i++)
        cout << arr[i] << " ";
        
}
