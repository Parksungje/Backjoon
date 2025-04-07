#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s = "Hello World!";
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> s;
		cout << s.front() << s.back() << '\n';
	}
}