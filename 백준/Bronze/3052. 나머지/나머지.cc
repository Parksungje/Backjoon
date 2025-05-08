#include <iostream>
using namespace std;

int main() {
	int n;
	int m[42] = { 0 };
	int cnt = 0;

	for (int i = 0; i < 10; i++) {
		cin >> n;
		m[n % 42]++;
	}

	for (int i = 0; i < 42; i++) {
		if (m[i] != 0)
			cnt++;
	}
	cout << cnt << endl;
}	