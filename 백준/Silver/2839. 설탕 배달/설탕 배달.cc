#include<iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int five = n / 5;
	int three = 0;

	while (five >= 0)
	{
		int remaining = n - (five * 5);
		if (remaining % 3 == 0)
		{
			three = remaining / 3;
			cout << five + three << endl;
			return 0;
		}
		five--;
	}
	cout << -1 << '\n';
	return 0;
}