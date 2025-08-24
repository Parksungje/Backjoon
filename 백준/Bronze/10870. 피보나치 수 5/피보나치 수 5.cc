#include<iostream>
using namespace std;

int fibonarchi(int n)
{
	if(n == 0) return 0;
	else if(n == 1) return 1;
	else return fibonarchi(n - 1) + fibonarchi(n - 2);
}


int main()
{
	int n;
	cin >> n;
	cout << fibonarchi(n) << "\n";
}