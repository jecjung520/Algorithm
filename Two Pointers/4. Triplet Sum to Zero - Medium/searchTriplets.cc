#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void searchPair(vector<int> arr, int sum, int left, vector<vector<int>> triplets) {
    int right = arr.size() - 1;
    while (left < right) {
        int cursum = arr[left] + arr[right];
        if (cursum == sum) {
            triplets.push_back({-sum, left, right});
            left++;
            right--;
            while (left < right && arr[left] == arr[left-1]) left++; // skip same element
            while (left < right && arr[right] == arr[right+1]) right--;
        }
        else if (sum > cursum) left++;
        else right--;
    }
}

vector<vector<int>> searchTriplets(vector<int> arr) {
    sort(arr.begin(), arr.end()); // O(NlogN)
    vector<vector<int>> triplets;
    for (int i = 0; i < arr.size() - 2; i++) {
        if (i > 0 && arr[i] == arr[i - 1]) continue;
        searchPair(arr, -arr[i], i + 1, triplets); // -arr[i] = -sum
    }
    return triplets;
}

int main() {
  vector<int> vec = {-3, 0, 1, 2, -1, 1, -2};
  auto result = searchTriplets(vec);
  for (auto vec : result) {
    cout << "[";
    for (auto num : vec) {
      cout << num << " ";
    }
    cout << "]";
  }
  cout << endl;

  vec = {-5, 2, -1, -2, 3};
  result = searchTriplets(vec);
  for (auto vec : result) {
    cout << "[";
    for (auto num : vec) {
      cout << num << " ";
    }
    cout << "]";
  }
}