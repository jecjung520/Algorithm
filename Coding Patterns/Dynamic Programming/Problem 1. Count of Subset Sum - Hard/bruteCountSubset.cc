using namespace std;

#include <iostream>
#include <vector>

class SubsetSum {
public:
  int countSubsets(const vector<int> &num, int sum) {
    return countSubsetsRecursion(num, sum, 0);
  }

  int countSubsetsRecursion(const vector<int>& num, int sum, int curIndex) {
    if (sum == 0) return 1;
    if (num.empty() || curIndex >= num.size()) return 0;

    int sum1 = 0;
    if (num[curIndex] <= sum) {
        sum1 = countSubsetsRecursion(num, sum - num[curIndex], curIndex + 1);
    }
    int sum2 = countSubsetsRecursion(num, sum, curIndex + 1);

    return sum1 + sum2;
  }
};

int main(int argc, char *argv[]) {
  SubsetSum ss;
  vector<int> num = {1, 1, 2, 3};
  cout << ss.countSubsets(num, 4) << endl;
  num = vector<int>{1, 2, 7, 1, 5};
  cout << ss.countSubsets(num, 9) << endl;
}
