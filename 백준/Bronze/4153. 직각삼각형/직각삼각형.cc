//a² + b² = c²
#include<iostream>
using namespace std;

int main()
{
	int num1, num2, num3;

	while (true) 
	{
		cin >> num1 >> num2 >> num3;

		if (num1 == 0 && num2 == 0 && num3 == 0) break;

		if (num1 > num2) 
			swap(num1, num2);

		if (num2 > num3) 
			swap(num2, num3);

		if (num1 * num1 + num2 * num2 == num3 * num3) 
			cout << "right" << endl;
		else 
			cout << "wrong" << endl;
	}
}
