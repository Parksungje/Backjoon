#include <iostream>
using namespace std;

int main()
{
	int a, b = 0;
	while (true)
	{
		cin >> a >> b;
		if (cin.eof())
			break;
		cout << a + b << '\n';
	}
}