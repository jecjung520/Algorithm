using namespace std;

#include <iostream>
#include <vector>

class SubsetSum {
public:
  int countSubsets(const vector<int> &num, int sum) {
    vector<vector<int>> dp(num.size(), vector<int>(sum + 1, -1));
    return countSubsetsRecursion(dp, num, sum, 0);
  }

  int countSubsetsRecursion(vector<vector<int>>& dp, const vector<int>& num, int sum, int curIndex) {
    if (sum == 0) return 1;
    if (num.empty() || curIndex >= num.size()) return 0;

    if (dp[curIndex][sum] == -1) {
        int sum1 = 0;
        if (num[curIndex] <= sum) {
            sum1 = countSubsetsRecursion(dp, num, sum - num[curIndex], curIndex + 1);
        }
        int sum2 = countSubsetsRecursion(dp, num, sum, curIndex + 1);

        dp[curIndex][sum] = sum1 + sum2;
    }
    

    return dp[curIndex][sum];
  }
};

int main(int argc, char *argv[]) {
  SubsetSum ss;
  vector<int> num = {1, 1, 2, 3};
  cout << ss.countSubsets(num, 4) << endl;
  num = vector<int>{1, 2, 7, 1, 5};
  cout << ss.countSubsets(num, 9) << endl;
}
