#include <iostream>
#include <vector>
#include <unordered_set>

#define INT_MIN (-2147483647 - 1)

using namespace std;

int findLength(vector<char> arr) {
    int windowStart = 0, windowSize = 0;
    unordered_set<char> basket;
    for (int i = 0; i < arr.size(); i++) {
        basket.insert(arr[i]);
        windowSize++;
        if (int(basket.size()) > 2) {
            windowSize--;
            basket.erase(arr[windowStart++]);
        }
    }
    return windowSize;
}

int main(int argc, char *argv[])
{
    cout << "Maximum number of fruits: "
         << findLength(vector<char>{'A', 'B', 'C', 'A', 'C'})
         << endl;
    cout << "Maximum number of fruits: "
         << findLength(vector<char>{'A', 'B', 'C', 'B', 'B', 'C'})
         << endl;
}