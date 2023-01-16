#include <iostream>
#include <vector>

using namespace std;

static vector<int> makeSquares(vector<int> arr) {
    int n = arr.size();
    vector<int> result(n);
    int mx = n - 1, left = 0, right = n - 1;
    while (left <= right) {
        int ls = arr[left] * arr[left];
        int rs = arr[right] * arr[right];
        if (ls > rs) {
            result[mx--] = ls;
            left++;
        }
        else {
            result[mx--] = rs;
            right--;
        }
    }
    return result;
}

int main() {
  vector<int> result = makeSquares(vector<int>{-2, -1, 0, 2, 3});
  for (auto num : result) {
    cout << num << " ";
  }
  cout << endl;

  result = makeSquares(vector<int>{-3, -1, 0, 1, 2});
  for (auto num : result) {
    cout << num << " ";
  }
  cout << endl;
}
