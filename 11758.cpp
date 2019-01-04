/*
	[11758]CCW
	https://www.acmicpc.net/problem/11758
	https://github.com/tjdskaqks
	http://jcoder1.tistory.com/
*/
#include <iostream>
using namespace std;

int main()
{
	int x1, y1, x2, y2, x3, y3;
    
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    
	int temp = (x2 - x1)*(y3 - y1) - (y2 - y1)*(x3 - x1);
    
	if (temp > 0)
		cout << 1;
	else if (temp < 0)
		cout << -1;
	else
		cout << 0;
}
