#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s = "Hello World!";
	int n = 0;
	cin >> s;
	cin >> n;
	cout << s[n - 1];
}