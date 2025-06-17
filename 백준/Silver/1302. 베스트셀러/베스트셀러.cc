#include<iostream>
#include<vector>
#include<map>
#include<string>
using namespace std;


int main()
{
	map<string, int> book;
	int n;
	string s;

	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		cin >> s;
		book[s] += 1;
	}

	string ans;
	int max = -1;
	for (auto a : book)
	{
		if (a.second > max)
		{
			max = a.second;
			ans = a.first;
		}
	}
	cout << ans;
}