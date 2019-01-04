/*
	[11370] Spawn of Ungoliant
	https://www.acmicpc.net/problem/11370
	https://github.com/tjdskaqks
	http://jcoder1.tistory.com/
*/
#include <iostream>
using namespace std;

int main()
{
	int i, j, k, w, h;
  
	while (1)
	{
		scanf("%d %d", &w, &h);
		if (w == 0 || h == 0)
			break;
		char** arr = new char*[h + 2];
    
		for (i = 0; i <= h+1; i++)
			arr[i] = new char[w + 2];
			
		for (i = 1; i <= h; i++)
			for (j = 1; j <= w; j++)
				cin >> arr[i][j];
		for (k = 0; k < w; k++)
			for (i = 1; i <= h; i++)
				for (j = 1; j <= w; j++)
					if (arr[i - 1][j] == 'S' || arr[i][j - 1] == 'S' || arr[i][j + 1] == 'S' || arr[i + 1][j] == 'S')
						if (arr[i][j] != '.')
							arr[i][j] = 'S';
		for (i = 1; i <= h; i++)
		{
			for (j = 1; j <= w; j++)
				printf("%c", arr[i][j]);
			printf("\n");
		}
		for (i = 0; i <= h+1; i++)
			delete[] arr[i];
		delete[] arr;
	}
	return 0;
}
