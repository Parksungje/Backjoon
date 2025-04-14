#include<iostream>
using namespace std;

int main()
{
	int n = 0;
	int times = 1;
	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		times *= i;
	}
	cout << times << endl;
	return 0;
}