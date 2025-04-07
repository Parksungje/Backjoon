#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int num;
    vector<vector<int>> v;
    for (int i = 0; i < n; i++) 
    {
        vector<int> vec;
        for (int j = 0; j < m; j++) 
        {
            cin >> num;
            vec.push_back(num);
        }
        v.push_back(vec);
    }

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
        {
            cin >> num;
            v[i][j] += num;
            cout << v[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
