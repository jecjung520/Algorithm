#include <iostream>
#include <vector>

using namespace std;

#define INT_MIN (-2147483647 - 1)

class MaxSumSubArrayOfSizeK
{
public:
    static int findMaxSumSubArray(int k, const vector<int> &arr)
    {
        int maxSum = INT_MIN;
        for (int i = 0; i <= arr.size() - k; i++) {
            int sum = 0;
            for (int j = i; j < i + k; j++) {
                sum += arr[j];
            }
            maxSum = max(maxSum, sum);
        }
        return maxSum;
    }
};

int main(int argc, char *argv[])
{
    cout << "Maximum sum of a subarray of size K: "
         << MaxSumSubArrayOfSizeK::findMaxSumSubArray(3, vector<int>{2, 1, 5, 1, 3, 2})
         << endl;
    cout << "Maximum sum of a subarray of size K: "
         << MaxSumSubArrayOfSizeK::findMaxSumSubArray(2, vector<int>{2, 3, 4, 1, 5})
         << endl;
}