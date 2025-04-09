#include <iostream>

using namespace std;

int main() 
{
	int num[9];
	for (int i = 0; i < 9; i++) 
	{
		cin >> num[i];
	}
	int max = -1;	
	int maxIndex;	

	for (int i = 0; i < 9; i++) 
	{
		if (num[i] > max) 
		{
			max = num[i];
			maxIndex = i;
		}
	}
	cout << max << "\n";

	cout << maxIndex + 1;
	return 0;
}