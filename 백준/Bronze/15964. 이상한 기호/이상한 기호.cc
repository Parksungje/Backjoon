#include<iostream>
using namespace std;

int main()
{
	int n[2];
	int result;

	for (int i = 0; i < 2; ++i)
	{
		cin >> n[i];
		result = (n[0] + n[1]) * (n[0] - n[1]);
	}

	cout << result;
}