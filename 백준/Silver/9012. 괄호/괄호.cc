#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<stack>
using namespace std;

int main()
{
	int n;
	string s;
	cin >> n;
	for (int i = 0; i < n; ++i) // 테스트 케이스 갯수
	{
		stack<string>stack;
		bool isFalse = false; // flag
		cin >> s; // 괄호를 한줄로 받기
		for (int j = 0; j < s.length(); ++j) // 괄호 한개씩 검사
		{
			if (s[j] == '(')
			{
				stack.push(s);
			}
			else if (!stack.empty() && s[j] == ')')
			{
				stack.pop();
			}
			else if (stack.empty())
			{
				if (s[j] == ')')
				{
					isFalse = true;
				}
			}
		}

		if (isFalse == true || !stack.empty())
			cout << "NO" << endl;
		else
			cout << "YES" << endl;
	}
}