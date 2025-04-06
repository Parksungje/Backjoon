#include<iostream>

using namespace std;

int main()
{
	int x, y = 0;
	int n = 0;
	cin >> x;
	cin >> y;

	for (int i = 0; i < x; ++i)
	{
		cin >> n;
		if (n < y)
		{
			cout << n << " ";
		}
	}

}