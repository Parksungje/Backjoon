#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() 
{
    int n, input;
    vector<int> a;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> input;
        a.push_back(input);
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < a.size(); ++i)
    {
        cout << a[i] << '\n';
    }
}