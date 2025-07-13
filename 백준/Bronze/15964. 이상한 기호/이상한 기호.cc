#include<iostream>
using namespace std;

int main()
{
	long long n[2];
	cin >> n[0] >> n[1];
	long long result;

	result = (n[0] + n[1]) * (n[0] - n[1]);

	cout << result;
}
//변수 선언을 바꿔봄