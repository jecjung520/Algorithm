#include <iostream>
#include <vector>

#define INT_MAX 2147483647
#define INT_MIN (-2147483647 - 1)

using namespace std;

int minSort(vector<int> v) {
    int low = 0, high = v.size() - 1;
    while (low < high && v[low] <= v[low+1]) low++;
    if (low >= high) return 0;
    while (high >= 0 && v[high] >= v[high-1]) high--;
    int smallest = INT_MAX, largest = INT_MIN;
    for (int i = low; i <= high; i++) {
        smallest = min(smallest, v[i]);
        largest = max(largest, v[i]);
    }
    while (low > 0 && v[low - 1] > smallest) low--;
    while (high < v.size() - 1 && v[high + 1] < largest) high++;
    return high - low + 1;
}

int main() {
  cout << minSort(vector<int>{1, 2, 5, 3, 7, 10, 9, 12}) << endl;
  cout << minSort(vector<int>{1, 3, 2, 0, -1, 7, 10}) << endl;
  cout << minSort(vector<int>{1, 2, 3}) << endl;
  cout << minSort(vector<int>{3, 2, 1}) << endl;
}