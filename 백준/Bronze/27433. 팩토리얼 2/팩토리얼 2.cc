#include <iostream>
using namespace std;


long long int factorial(int n) 
{
	if (n < 2) return 1;
	return n * factorial(n - 1);
}

int main() {
	int N;
	cin >> N;
	cout <<  factorial(N);
	return 0;
}