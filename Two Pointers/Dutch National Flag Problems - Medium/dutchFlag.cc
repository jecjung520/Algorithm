#include <iostream>
#include <vector>

using namespace std;

static void Dswap(vector<int> &arr, int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

static void Dsort(vector<int> &arr) {
    // all elements < low are 0 and all elements > high are 2
    // all elements from >= low < i are 1
    int low = 0, high = arr.size() - 1;
    for (int i = 0; i <= high;) {
        if (arr[i] == 0) {
            Dswap(arr, i, low);
            i++;
            low++;
        } else if (arr[i] == 1) {
            i++;
        } else {  // the case for arr[i] == 2
            Dswap(arr, i, high);
            // decrement 'high' only, after the swap the number at index 'i' could be 0, 1,
            // or 2
            high--;
        }
    }
}

int main(int argc, char *argv[]) {
  vector<int> arr = {1, 0, 2, 1, 0};
  Dsort(arr);
  for (auto num : arr) {
    cout << num << " ";
  }
  cout << endl;

  arr = vector<int>{2, 2, 0, 1, 2, 0};
  Dsort(arr);
  for (auto num : arr) {
    cout << num << " ";
  }
}