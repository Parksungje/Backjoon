#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s;
	cin >> s;

	for (int i = 0; i < s.length(); ++i)
	{
		if (s[i] >= 'A' && s[i] <= 'Z')  // 대문자면
			s[i] += 32;                 // 소문자로
		else if (s[i] >= 'a' && s[i] <= 'z')  // 소문자면
			s[i] -= 32;                       // 대문자로
	}

	cout << s;
}