/*
	1977 : 완전제곱수
	https://www.acmicpc.net/problem/1977
	https://github.com/tjdskaqks
	http://jcoder1.tistory.com/
*/
#include <iostream>
using namespace std;

int main()
{ 
	int min, max, sum = 0, resultMin = 0;
	int i = 0;
  
	cin >> min >> max; 
	
	while(++i)
	{ 
		if(i*i >= min && i*i <= max)
		{ 
			if(!resultMin) 
				resultMin = i * i; 
			sum += i*i; 
		}
		else if(i*i > maximum) 
			break; 
	}
	
	if(sum) 
		printf("%d\n%d", sum, resultMin); 
	else
		printf("-1\n"); 
}
