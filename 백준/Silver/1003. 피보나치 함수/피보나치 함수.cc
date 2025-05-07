#include<iostream>
#include<vector>
using namespace std;
vector<pair<int, int>> fiboArr(40);
int main() {
	int count;
	cin >> count;
    int max=0;
    vector<int> arr;
    for (int i = 0;i < count;++i) {
        int num;
        cin >> num;
        arr.push_back(num);
        if (max < num)
            max = num;
    }
    pair<int, int> resetPair = { 1,0 };
    fiboArr[0] = resetPair;
    resetPair = { 0,1 };
    fiboArr[1] = resetPair;

    for (int i = 2;i <= max;++i) {
        pair<int, int> pair = { fiboArr[i - 1].first + fiboArr[i - 2].first,fiboArr[i - 1].second + fiboArr[i - 2].second };
        fiboArr[i] = pair;
    }
    for (int i : arr) {
        cout<<fiboArr[i].first << " " << fiboArr[i].second<<"\n";
    }
}