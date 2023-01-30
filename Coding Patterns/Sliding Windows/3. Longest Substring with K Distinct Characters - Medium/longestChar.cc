#include <iostream>
#include <vector>
#include <unordered_set>

#define INT_MIN (-2147483647 - 1)

using namespace std;

int longestChar(string str, int k) {
    unordered_set<char> us;
    int windowStart = 0, maxLength = INT_MIN;
    for (int i = 0; i < str.length(); i++) {
        us.insert(str[i]);
        if (int(us.size()) > k) {
            maxLength = max(maxLength, i - windowStart);
            us.erase(str[windowStart++]);
        }
    }
    return maxLength;
}

int main(int argc, char *argv[])
{
    cout << "Length of the longest substring: "
         << longestChar("araaci", 2) << endl;
    cout << "Length of the longest substring: "
         << longestChar("araaci", 1) << endl;
    cout << "Length of the longest substring: "
         << longestChar("cbbebi", 3) << endl;
}