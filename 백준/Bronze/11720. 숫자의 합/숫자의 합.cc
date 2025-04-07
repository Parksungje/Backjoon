#include<iostream>
#include<string>
using namespace std;

int main()
{
	int cnt = 0;
	string s;
	cin >> cnt;
	cin >> s;
	int sum = 0;
	for (int i = 0; i < cnt; ++i)
	{
		sum += s[i] - '0';
	}
	cout << sum;
}