#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    map<string, int> mp;
    vector<string> vec;

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n + m; ++i)
    {
        string str;
        cin >> str;
        mp[str]++;
        if (mp[str] > 1)
            vec.push_back(str);
    }

    sort(vec.begin(), vec.end());

    cout << vec.size() << '\n';

    for (auto a : vec)
    {
        cout << a << '\n';
    }
}