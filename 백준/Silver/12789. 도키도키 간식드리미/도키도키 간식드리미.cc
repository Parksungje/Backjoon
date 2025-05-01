
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<stack>
using namespace std;

int main()
{
	int n;
	cin >> n;

	stack<int>waiting;
	int curReq = 1;
	string res = "";


	for (int i = 0; i < n; ++i)
	{
		int input;
		cin >> input;
		waiting.push(input);

		while (!waiting.empty() && waiting.top() == curReq)
		{
			waiting.pop();
			curReq++;
		}
	}
	if (waiting.empty())
	{
		cout << "Nice";
	}
	else
	{
		cout << "Sad";
	}
}
