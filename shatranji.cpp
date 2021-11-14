#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main()
{
	int n, m, i, j;
	char x, y, z;
	x = '*';
	y = '#';
	cout << "please enter n:"<<endl;
	cin >> n;
	cout << "please enter m:"<<endl;
	cin >> m;
	for (i = 0; i < n; i++) 
	{
		for (j = 0; j < m; j++) 
		{
			if (j % 2 == 0) 
			{
				cout << y;
			}
			else 
			{
				cout << x;
			}
		}
		cout << endl;
		z = x;
		x = y;
		y = z;
	}
	return 0;
}
