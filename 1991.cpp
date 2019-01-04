/*
	1991 : 트리 순회
	https://www.acmicpc.net/problem/1991
	https://github.com/tjdskaqks
	http://jcoder1.tistory.com/
*/
#include <iostream>
using namespace std;

typedef struct node
{
	char left;
	char right;
}node;
node arr[27];

void preorder(char c)
{
	if (c == '.')
		return;
	else
	{
		cout << c;
		preorder(arr[c].left);
		preorder(arr[c].right);
	}
}

void inorder(char c)
{
	if (c == '.')
		return;
	else
	{
		inorder(arr[c].left);
		cout << c;
		inorder(arr[c].right);
	}
}

void postorder(char c)
{
	if (c == '.')
		return;
	else
	{
		postorder(arr[c].left);
		postorder(arr[c].right);
		cout << c;
	}
}

int main()
{
	int n, i;
	char c1, c2, c3;
	cin >> n;
	
	for (i = 0; i < n; i++)
	{
		cin >> c1 >> c2 >> c3;
		arr[c1].left = c2;
		arr[c1].right = c3;
	}
	preorder('A'); cout << "\n";
	inorder('A'); cout << "\n";
	postorder('A'); cout << "\n";
}
