#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

class Solution {
public:
    vector<vector<int>> getAllFactors(int n, int start, vector<int>& curr, vector<vector<int>>& result) {
      // This loop is used to find all the factors of the input number n
      for (int i = start; i <= sqrt(n); i++) {
        // If n is divisible by i, add i to the curr list of factors; 
        // curr is used to store the current factors being calculated
        if (n % i == 0) {
          curr.push_back(i); // Found a factor, append it to the list of factors
          // Append the current factors and the corresponding factor of 'n / i' to the result list
          vector<int> currCopy(curr);
          currCopy.push_back(n/i);
          result.push_back(currCopy);
          // Recursively call the function with 'n / i' as the new input, i as the new start value, and 
          // curr and result as the current factors and results
          getAllFactors(n / i, i, curr, result);
          curr.pop_back(); // Remove last element from curr to backtrack and find other factors
        }
      }
      return result;
    }

    vector<vector<int>> getFactors(int n) {
      vector<int> curr;
      vector<vector<int>> result;
      return getAllFactors(n, 2, curr, result);
    }
};

int main() {
    Solution s;

    // Test case 1
    auto res = s.getFactors(8);
    for (auto r : res)
    {
      for (auto i : r)
        cout << i << " ";
      cout << endl;
    } 
    // Expected output: [[2, 2, 2], [2, 4]]

    // Test case 2
    res = s.getFactors(12);
    for (auto r : res)
    {
      for (auto i : r)
        cout << i << " ";
      cout << endl;
    } 
    // Expected output: [[2, 2, 3], [2, 6], [3, 4]]

    // Test case 3
    res = s.getFactors(16);
    for (auto r : res)
    {
      for (auto i : r)
        cout << i << " ";
      cout << endl;
    } 
    // Expected output: [[2, 2, 2, 2], [2, 2, 4], [2, 8], [4, 4]]

    // Test case 4
    res = s.getFactors(20);
    for (auto r : res)
    {
      for (auto i : r)
        cout << i << " ";
      cout << endl;
    } 
    // Expected output: [[2, 2, 5], [2, 10], [4, 5]]

    // Test case 5
    res = s.getFactors(1);
    for (auto r : res)
    {
      for (auto i : r)
        cout << i << " ";
      cout << endl;
    } 
    // Expected output: []
    return 0;
}
