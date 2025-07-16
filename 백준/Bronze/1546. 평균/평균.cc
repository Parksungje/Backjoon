#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<int> scores(n);
	double max_score = 0;

	for (int i = 0; i < n; ++i)
	{
		cin >> scores[i];
		if (scores[i] > max_score)
			max_score = scores[i];
	}

	double sum = 0;
	for (int i = 0; i < n; ++i)
	{
		sum += (scores[i] / max_score) * 100;
	}

	cout << sum / n << endl;

	return 0;
}
