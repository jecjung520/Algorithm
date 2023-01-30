using namespace std;

#include <iostream>
#include <limits>
#include <vector>

#define INT_MAX 2147483647

class MinSizeSubArraySum
{
public:
    static int findMinSubArray(int S, const vector<int> &arr)
    {
        int startingWindow = 0, minLength = INT_MAX, windowSum = 0, windowLength = 0;
        for (int i = 0; i < arr.size(); i++) {
            windowSum += arr[i];
            while (windowSum >= S) {
                minLength = min(minLength, i - startingWindow + 1);
                windowSum -= arr[startingWindow++];
            }
        }
        return minLength;
    }
};

int main(int argc, char *argv[])
{
    int result = MinSizeSubArraySum::findMinSubArray(7, vector<int>{2, 1, 5, 2, 3, 2});
    cout << "Smallest subarray length: " << result << endl;
    result = MinSizeSubArraySum::findMinSubArray(7, vector<int>{2, 1, 5, 2, 8});
    cout << "Smallest subarray length: " << result << endl;
    result = MinSizeSubArraySum::findMinSubArray(8, vector<int>{3, 4, 1, 1, 6});
    cout << "Smallest subarray length: " << result << endl;
}