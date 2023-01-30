using namespace std;

#include <iostream>
#include <vector>

#define INT_MIN (-2147483647 - 1)

class MaxSumSubArrayOfSizeK
{
public:
    static int findMaxSumSubArray(int k, const vector<int> &arr)
    {
        int maxSum = INT_MIN, windowSum = 0, windowStart = 0;
        for (int i = 0; i < arr.size(); i++) {
            windowSum += arr[i];
            if (i >= k - 1) {
                maxSum = max(maxSum, windowSum);
                windowSum -= arr[windowStart++];
            }
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