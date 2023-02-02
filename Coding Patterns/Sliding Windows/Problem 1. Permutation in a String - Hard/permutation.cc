#include <iostream>
#include <unordered_map>

using namespace std;

bool findPermutation(string str, string pattern) {
    int windowStart = 0, matched = 0;
    unordered_map<char, int> window;
    for (auto c: pattern) window[c]++;
    for (int i = 0; i < str.size(); i++) {
        if (window.find(str[i]) != window.end()) {
            window[str[i]]--;
            if (window[str[i]] == 0) matched++;
        }
        if (matched == window.size()) return true;

        if (i >= pattern.length() - 1) {
            if (window.find(str[++windowStart]) != window.end()) {
                if (window[str[windowStart] == 0]) matched--;
                window[str[windowStart]]++;
            }
        }
    }
    return false;
}

int main()
{
    cout << "Permutation exist: " << findPermutation("oidbcaf", "abc")
         << endl;
    cout << "Permutation exist: " << findPermutation("odicf", "dc")
         << endl;
    cout << "Permutation exist: "
         << findPermutation("bcdxabcdy", "bcdyabcdx") << endl;
    cout << "Permutation exist: "
         << findPermutation("aaacb", "abc") << endl;
}