#include <iostream>
#include <vector>

using namespace std;

class SubsetSum {
public:
    bool canPartition(vector<int>& num, int S) {
        return this->canPartitionRecursive(num, S, 0);
    }
private:
    bool canPartitionRecursive(vector<int>& num, int S, int currentIndex) {
        if (S == 0)
            return true;

        if (num.empty() || currentIndex >= num.size())
            return false;

        if (num[currentIndex] <= S) {
            if (canPartitionRecursive(num, S - num[currentIndex], currentIndex + 1))
                return true;
        }

        return canPartitionRecursive(num, S, currentIndex + 1);
    }
};

int main(int argc, char *argv[]) {
  SubsetSum ss;
  vector<int> num = {1, 2, 3, 7};
  cout << ss.canPartition(num, 6) << endl;
  num = vector<int>{1, 2, 7, 1, 5};
  cout << ss.canPartition(num, 10) << endl;
  num = vector<int>{1, 3, 4, 8};
  cout << ss.canPartition(num, 6) << endl;
}