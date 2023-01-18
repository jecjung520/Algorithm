#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void subSets(vector<int>& nums, vector<int>& temp, int target, int start, vector<vector<int>>& result) {
    if (temp.size() == 4) {
        int sum = 0;
        for (int i : temp) {
            sum += i;
        }
        if (sum == target) result.push_back(temp);
    }
    for (int i = start; i < nums.size(); i++) {
        if (i > start && nums[i] == nums[i-1]) continue;
        temp.push_back(nums[i]);
        subSets(nums, temp, target, i + 1, result);
        temp.pop_back();   
    }
}

vector<vector<int>> searchQuadruplets(vector<int>& v, int target) {
    vector<vector<int>> result;
    vector<int> temp;
    sort(v.begin(), v.end());
    subSets(v, temp, target, 0, result);
    return result;
}

int main() {
  vector<int> vec = {4, 1, 2, -1, 1, -3};
  auto result = searchQuadruplets(vec, 1);
  for (auto vec : result) {
    cout << "[";
    for (auto num : vec) {
      cout << num << " ";
    }
    cout << "]";
  }
  cout << endl;

  vec = {2, 0, -1, 1, -2, 2};
  result = searchQuadruplets(vec, 2);
  for (auto vec : result) {
    cout << "[";
    for (auto num : vec) {
      cout << num << " ";
    }
    cout << "]";
  }
}