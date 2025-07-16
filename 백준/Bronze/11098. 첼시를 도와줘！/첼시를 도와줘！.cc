#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Player 
{
    string name;
    int price;
};

int main() 
{
    int t;
    cin >> t;

    while (t--) 
    {
        int n;
        cin >> n;

        vector<Player> vec(n);

        for (int i = 0; i < n; ++i) 
        {
            cin >> vec[i].price >> vec[i].name;
        }

        Player mexpen = vec[0];
        for (int i = 1; i < n; ++i) 
        {
            if (vec[i].price > mexpen.price) 
            {
                mexpen = vec[i];
            }
        }

        cout << mexpen.name << endl;
    }

    return 0;
}
