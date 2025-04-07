#include<iostream>
#include<string>
#include<stack>
using namespace std;

int main()
{
	stack<int> stack;
	int n = 0;
	int inp;
	int sum = 0;

	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> inp;

		if (inp == 0)
		{
			sum -= stack.top();
			stack.pop();
		}
		else
		{
			stack.push(inp);
		}

		sum += inp;
	}
	cout << sum;
}