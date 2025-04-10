#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	string str;
	cin >> str;

	int arr[26] = { -1 };
	fill(arr, arr + 26, -1);
	for (int i = 0; i < str.size(); ++i)
	{
		int num = str[i] - 'a';
		if (arr[num] != -1) continue;
		arr[num] = i;
	}
	for (int i : arr)
	{
		cout << i << " ";
	}
}