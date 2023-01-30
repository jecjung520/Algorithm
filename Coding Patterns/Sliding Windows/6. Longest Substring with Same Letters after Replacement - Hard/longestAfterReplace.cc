#include <iostream>
#include <unordered_map>

#define INT_MIN (-2147483647 - 1)

using namespace std;

class CharacterReplacement {
public:
    static int findLength(string str, int K) {
        int maxLength = INT_MIN, maxWindow = INT_MIN, windowStart = 0;
        unordered_map<char, int> window;
        for (int i = 0; i < str.length(); i++) {
            window[str[i]]++;

            // compute max length of single letter window
            maxWindow = max(maxWindow, window[str[i]]);

            // the remaining letters are greater than K, replacement cannot occur
            // hence, window is shrinked
            if (i - windowStart - maxWindow > K) {
                window[str[windowStart++]]--;
            }
            maxLength = max(maxLength, i - windowStart);
        }
        return maxLength;
    }
};

int main(int argc, char *argv[])
{
    cout << CharacterReplacement::findLength("aabccbb", 2) << endl;
    cout << CharacterReplacement::findLength("abbcb", 1) << endl;
    cout << CharacterReplacement::findLength("abccde", 1) << endl;
}