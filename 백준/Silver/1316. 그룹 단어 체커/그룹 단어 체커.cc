#include <iostream>
#include <string>
using namespace std;

int main() 
{
	int n;
	cin >> n;

	string str;
	int cnt = 0;

	for (int i = 0; i < n; i++) {
		cin >> str;

		if (str.length() <= 2)
		{
			continue;
		}
		else
		{
			for (int j = 0; j < str.length() - 1; j++)
			{
				if (str[j] != str[j + 1])
				{
					if (str.find(str[j], j + 2) != string::npos)
					{
						cnt++;
						break;
					}
				}
			}
		}
	}
	cout << n - cnt;
}

