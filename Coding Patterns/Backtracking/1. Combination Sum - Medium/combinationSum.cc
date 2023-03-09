#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
  vector<vector<int>> combinationSum(vector<int> &candidates, int target)
  {
    vector<vector<int>> res;
    vector<int> comb;
    backtrack(candidates, 0, target, comb, res);
    return res;
  }

private:
  void backtrack(vector<int> &candidates, int start, int target, vector<int> &comb, vector<vector<int>> &res)
  {
    // If target is 0, we have found a valid combination
    if (target == 0)
    {
      // Append a copy of the current combination to the result list
      res.push_back(comb);
      return;
    }
    // Iterate through the candidates array starting from the given index
    for (int i = start; i < candidates.size(); i++)
    {
      // If the current candidate is greater than the remaining target, move on to the next
      if (target < candidates[i])
      {
        continue;
      }
      // Add the current candidate to the current combination
      comb.push_back(candidates[i]);
      // Recursively call the function with the updated combination and remaining target
      backtrack(candidates, i, target - candidates[i], comb, res);
      // Backtrack by removing the last added candidate from the combination
      comb.pop_back();
    }
  }
};

int main()
{
  Solution s;
  // Test case 1
  vector<int> candidates = {2, 3, 6, 7};
  int target = 7;
  auto res = s.combinationSum(candidates, target);
  for (auto r : res)
  {
    for (auto i : r)
      cout << i << " ";
    cout << endl;
  }
  // expected output: [[2, 2, 3], [7]]

  // Test case 2
  candidates = {2, 3, 5};
  target = 8;
  res = s.combinationSum(candidates, target);
  for (auto r : res)
  {
    for (auto i : r)
      cout << i << " ";
    cout << endl;
  }
  // expected output: [[2, 2, 2, 2], [2, 3, 3], [3, 5]]

  // Test case 3
  candidates = {};
  target = 8;
  res = s.combinationSum(candidates, target);
  for (auto r : res)
  {
    for (auto i : r)
      cout << i << " ";
    cout << endl;
  }
  // expected output: []

  // Test case 4
  candidates = {5, 10, 15};
  target = 20;
  res = s.combinationSum(candidates, target);
  for (auto r : res)
  {
    for (auto i : r)
      cout << i << " ";
    cout << endl;
  }
  // expected output: [[5,5,5,5], [5,5,10], [5,15], [10,10]]

  // Test case 5
  candidates = {2, 4, 6, 8};
  target = 10;
  res = s.combinationSum(candidates, target);
  for (auto r : res)
  {
    for (auto i : r)
      cout << i << " ";
    cout << endl;
  }
  // expected output: [[2,2,2,2,2], [2,2,2,4], [2,2,6], [2,4,4], [2,8], [4,6]]

  // Test case 6
  candidates = {2, 3, 5};
  target = 0;
  res = s.combinationSum(candidates, target);
  for (auto r : res)
  {
    for (auto i : r)
      cout << i << " ";
    cout << endl;
  }
  // expected output: []
}
