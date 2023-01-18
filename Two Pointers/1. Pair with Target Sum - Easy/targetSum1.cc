#include <iostream>
#include <vector>

using namespace std;

static pair<int, int> search(const vector<int> &arr, int targetSum) {
  int left = 0, right = arr.size() - 1;
  while (left < right) {
    int currentSum = arr[left] + arr[right];
    if (currentSum == targetSum)
      return make_pair(left, right);
    
    if (targetSum > currentSum)
      left++; 
    else
      right--; 
  }
  return make_pair(-1, -1);
}


int main() {
  auto result = search(vector<int>{1, 2, 3, 4, 6}, 6);
  cout << "Pair with target sum: [" << result.first << ", " << result.second << "]" 
       << endl;
  result = search(vector<int>{2, 5, 9, 11}, 11);
  cout << "Pair with target sum: [" << result.first << ", " << result.second << "]" 
       << endl;
}