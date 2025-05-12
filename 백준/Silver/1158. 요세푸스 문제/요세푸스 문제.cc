#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int main()
{
    queue<int>nums;
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        nums.push(i);
    }
    cout << "<";
    while (!nums.empty())
    {
        for (int i = 1; i < k; i++)
        {
            nums.push(nums.front());
            nums.pop();
        }
        cout << nums.front();
        nums.pop();
        if (nums.size() != 0)
            cout << ", ";
        else
            cout << ">";
    }
}