#include <iostream>
#include <vector>
#include <unordered_map>
#define INT_MIN (-2147483647 - 1)

using namespace std;

int findLength(vector<int> arr, int k) {
    int maxSum = INT_MIN, windowStart = 0, windowSum = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == 1) {
            windowSum++;
        }
        if (i - windowStart + 1 - windowSum > k) {
            if (arr[windowStart++] == 1) windowSum--;
        }
        maxSum = max(maxSum, i - windowStart + 1);
    }
    return maxSum;
}

int main()
{
    cout << findLength(vector<int>{0, 1, 1, 0, 0, 0, 1, 1, 0, 1, 1}, 2)
         << endl;
    cout << findLength(vector<int>{0, 1, 0, 0, 1, 1, 0, 1, 1, 0, 0, 1, 1}, 3)
         << endl;
}