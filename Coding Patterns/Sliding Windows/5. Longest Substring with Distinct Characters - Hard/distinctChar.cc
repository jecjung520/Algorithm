#include <iostream>
#include <vector>
#include <unordered_set>

#define INT_MIN (-2147483647 - 1)

using namespace std;

class NoRepeatSubstring {
public:
    static int findLength(string str) {
        int windowStart = 0, maxLength = INT_MIN;
        unordered_set<char> window;
        for (int i = 0; i < str.length(); i++) {
            window.insert(str[i]);
            if (int(window.size()) > 1) {
                maxLength = max(maxLength, i - windowStart + 1);
                window.erase(str[windowStart++]);
            }
        }
        return maxLength;
    }
};

int main(int argc, char *argv[])
{
    cout << "Length of the longest substring: " << NoRepeatSubstring::findLength("aabccbb")
         << endl;
    cout << "Length of the longest substring: " << NoRepeatSubstring::findLength("abbbb")
         << endl;
    cout << "Length of the longest substring: " << NoRepeatSubstring::findLength("abccde")
         << endl;
}